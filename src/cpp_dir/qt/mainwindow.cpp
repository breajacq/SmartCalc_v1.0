#include "mainwindow.h"

#include <stdio.h>

#include <iostream>
#include <string>

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  pictHeight = 241;  // задаем высоту картинки
  pictWidth = 541;   // и её ширину
  step = 0.1;        // задаем начальный шаг
  leftX = -100;
  rightX = 100;  // и начальные значения границ
  leftY = -100;
  rightY = 100;
  drawGraph();  // сразу же отрисовываем пустой график

  connect(ui->pushButton_0, SIGNAL(clicked()), this,
          SLOT(digits_numbers()));  // digits_numbers
  connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_mod, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_mul, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_minus, SIGNAL(clicked()), this,
          SLOT(digits_numbers()));
  connect(ui->brackets1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->brackets2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_plus_minus, SIGNAL(clicked()), this,
          SLOT(operations()));  // operations
  connect(ui->pushButton_dot, SIGNAL(clicked()), this,
          SLOT(dot_click()));  // dot_click
  connect(ui->pushButton_equal, SIGNAL(clicked()), this,
          SLOT(equal_click()));  // equal_click
  connect(ui->xSpinBox, SIGNAL(clicked()), this, SLOT(equal_click()));
  connect(ui->power, SIGNAL(clicked()), this,
          SLOT(reduce_power()));  // // reduce_power
  connect(ui->value_x, SIGNAL(clicked()), this, SLOT(reduce()));  // reduce
  connect(ui->sqrt, SIGNAL(clicked()), this, SLOT(reduce()));
  connect(ui->cos, SIGNAL(clicked()), this, SLOT(reduce()));
  connect(ui->acos, SIGNAL(clicked()), this, SLOT(reduce()));
  connect(ui->sin, SIGNAL(clicked()), this, SLOT(reduce()));
  connect(ui->asin, SIGNAL(clicked()), this, SLOT(reduce()));
  connect(ui->tan, SIGNAL(clicked()), this, SLOT(reduce()));
  connect(ui->atan, SIGNAL(clicked()), this, SLOT(reduce()));
  connect(ui->ln, SIGNAL(clicked()), this, SLOT(reduce()));
  connect(ui->log, SIGNAL(clicked()), this, SLOT(reduce()));

//  connect(ui->outputGraph, SIGNAL(clicked()), this, SLOT(drawGraph()));
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::digits_numbers() {
  QPushButton* button =
      (QPushButton*)sender();  // берем кнопку и запихиваем в button

  QString new_label;
  QString stdstring = "0";
  if ((ui->result_show->text() == stdstring)) {
    new_label = (button->text());
  } else {
    new_label = (ui->result_show->text() + button->text());
  }

  ui->result_show->setText(new_label);
}

void MainWindow::reduce_power() {
  QString new_label;
  QString stdstring = "0";
  QString strpower = "^";
  if ((ui->result_show->text() == stdstring)) {
    new_label = strpower;
  } else {
    new_label = (ui->result_show->text() + strpower);
  }

  ui->result_show->setText(new_label);
}

void MainWindow::operations() {
  QString input = ui->result_show->text();
  std::string str = input.toStdString();
  char* cstr = new char[str.length() + 1];

  strcpy(cstr, str.c_str());
  char* new_cstr = unary(cstr);

  std::string res_str(new_cstr);
  std::cout << res_str;
  QString label = QString::fromStdString(res_str);

  ui->result_show->setText(label);
  free(new_cstr);
  delete[] cstr;
}

void MainWindow::on_back_space_clicked() {
  QString new_label = "0";

  ui->result_show->setText(new_label);
}

void MainWindow::dot_click() {
  QPushButton* button = (QPushButton*)sender();

  ui->result_show->setText(ui->result_show->text() + button->text());
}

void MainWindow::equal_click() {
  QString input = ui->result_show->text();
  std::string str = input.toStdString();
  char* cstr = new char[str.length() + 1];

  strcpy(cstr, str.c_str());
  //

  QByteArray strx = ui->xSpinBox->text().toLocal8Bit();
  char* x_str2 = strx.data();
  char* new_cstr = replace_x(cstr, x_str2);

  calculate(new_cstr);

  std::string res_str(new_cstr);
  QString label = QString::fromStdString(res_str);

  ui->result_show->setText(label);
  free(new_cstr);
  delete[] cstr;
}

void MainWindow::reduce() {
  QPushButton* button = (QPushButton*)sender();
  QString input = ui->result_show->text();
  QString stdstring = "0";

  QString new_label = button->text();
  std::string str = new_label.toStdString();
  char* cstr = new char[str.length() + 1];

  strcpy(cstr, str.c_str());
  trig_reduce(cstr);

  std::string res_str(cstr);
  QString label = QString::fromStdString(res_str);
  if (input == stdstring) {
    ui->result_show->setText(label);
  } else {
    ui->result_show->setText(input + label);
  }

  delete[] cstr;
}

void MainWindow::on_outputGraph_clicked() {
    getData();
    recountPixels();
    drawGraph(1);
}

void MainWindow::getData() {
    leftX = ui->xMin->value(); // узнаем границы
    rightX = ui->xMax->value();
    leftY = ui->yMin->value();
    rightY = ui->yMax->value();
    if (leftX >= rightX) {
        leftX = -10;
        rightX = 10;
        ui->xMin->setValue(-10);
        ui->xMax->setValue(-10);
    }
    if (leftY >= rightY) {
        leftY = -10;
        rightY = 10;
        ui->yMin->setValue(-10);
        ui->yMax->setValue(-10);
    }
}

void MainWindow::recountPixels() {
  onePixelX = 541.0 / (rightX - leftX);
  onePixelY = 241.0 / (rightY - leftY);
  Ox = fabs(leftX);
  Oy = rightY;
}

void MainWindow::drawGraph(bool notEmpty) {
  char c_str2[256] = {0};
  pictHeight = 241;
  pictWidth = 541;
  QPixmap graph(541, 241);          // создаем саму картинку
  QPainter paint;                   // и пэинтер
  paint.begin(&graph);              // запускаем отрисовку
  paint.eraseRect(0, 0, 541, 241);  // очищаем рисунок
  paint.drawLine(Ox * onePixelX, 0, Ox * onePixelX,
                 pictHeight);  // и рисуем координатные оси
  paint.drawLine(0, Oy * onePixelY, pictWidth, Oy * onePixelY);
  paint.setPen(QPen(Qt::black,3));

  for(double i = leftX;i<=rightX;i+=10.0) // рисуем черточки на координатой оси
      paint.drawPoint((i+Ox)*onePixelX,Oy*onePixelY);
  for(double i = leftY;i<=rightY;i+=10.0)
      paint.drawPoint(Ox*onePixelX,(i+Oy)*onePixelY);
  QPainterPath path;
  double step = (rightX - leftX) * 0.001;
  for (double x = leftX; x <= rightX; x += step) {
      QByteArray ba = ui->result_show->text().toLocal8Bit();
      char* c_str = ba.data();
      sprintf(c_str2, "%.3f", x);
      char* result = replace_x(c_str, c_str2);
      calculate(result);
      double y = atof(result);
      y = y * (-1.0);
      paint.drawPoint((x + Ox) * onePixelX, (y + Oy) * onePixelY );
      paint.setPen(QPen(Qt::blue,2, Qt::SolidLine));
      paint.drawPath(path);
  }
  paint.end();
  ui->drawing_field->setPixmap(graph);

  return;
}


