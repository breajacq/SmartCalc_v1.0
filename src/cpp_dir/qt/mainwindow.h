#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QtGui>

extern "C" {
    #include "../../main.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
  void drawGraph(
      bool notEmpty = 0);  // функция, отвечающая за отрисовку графика
  void recountPixels();  // в зависимости от точности (об этом позже) считаем количество пикселей на один условный сантиметр
  void getData();  // получаем значения границ графика и точности

 private:
  Ui::MainWindow *ui;         // форма
  double leftX, rightX;       // границы по х
  double leftY, rightY;       // границы по у
  int pictWidth, pictHeight;  // ширина и высота картинки
  double step;                // шаг (точность)
  double onePixelX, onePixelY;  // количество пикселей на шаг
  double Ox, Oy;                // координаты центра

 private slots:
  void digits_numbers();
  void operations();
  void on_back_space_clicked();
  void dot_click();
  void equal_click();
  void reduce();
  void reduce_power();

  void on_outputGraph_clicked();
};
#endif  // MAINWINDOW_H
