#include "../main.h"
#include "./test.h"

START_TEST(trig_reduce_1) {
  char input[BUFF_SIZE] = "cos(x)";
  trig_reduce(input);
  ck_assert_str_eq(input, "cos(");
}
END_TEST

START_TEST(trig_reduce_2) {
  char input[BUFF_SIZE] = "sin(x)";
  trig_reduce(input);
  ck_assert_str_eq(input, "sin(");
}
END_TEST

START_TEST(trig_reduce_3) {
  char input[BUFF_SIZE] = "tan(x)";
  trig_reduce(input);
  ck_assert_str_eq(input, "tan(");
}
END_TEST

START_TEST(trig_reduce_4) {
  char input[BUFF_SIZE] = "log(x)";
  trig_reduce(input);
  ck_assert_str_eq(input, "log(");
}
END_TEST

START_TEST(trig_reduce_5) {
  char input[BUFF_SIZE] = "sqrt(x)";
  trig_reduce(input);
  ck_assert_str_eq(input, "sqrt(");
}
END_TEST

START_TEST(trig_reduce_6) {
  char input[BUFF_SIZE] = "acos(x)";
  trig_reduce(input);
  ck_assert_str_eq(input, "acos(");
}
END_TEST

START_TEST(trig_reduce_7) {
  char input[BUFF_SIZE] = "asin(x)";
  trig_reduce(input);
  ck_assert_str_eq(input, "asin(");
}
END_TEST

START_TEST(trig_reduce_8) {
  char input[BUFF_SIZE] = "atan(x)";
  trig_reduce(input);
  ck_assert_str_eq(input, "atan(");
}
END_TEST

START_TEST(trig_reduce_9) {
  char input[BUFF_SIZE] = "ln(x)";
  trig_reduce(input);
  ck_assert_str_eq(input, "ln(");
}
END_TEST

START_TEST(trig_reduce_10) {
  char input[BUFF_SIZE] = "(x)";
  trig_reduce(input);
  ck_assert_str_eq(input, "x");
}
END_TEST

START_TEST(replace_x_1) {
  char input[BUFF_SIZE] = "cos(x)";
  char value_x[BUFF_SIZE] = "5";
  char *res = replace_x(input, value_x);
  ck_assert_str_eq(res, "cos(5)");
}
END_TEST

START_TEST(replace_x_2) {
  char input[BUFF_SIZE] = "sin(x)+cos(x)";
  char value_x[BUFF_SIZE] = "7";
  char *res = replace_x(input, value_x);
  ck_assert_str_eq(res, "sin(7)+cos(7)");
}
END_TEST

START_TEST(replace_x_3) {
  char input[BUFF_SIZE] = "x + 5";
  char value_x[BUFF_SIZE] = "10";
  char *res = replace_x(input, value_x);
  ck_assert_str_eq(res, "10 + 5");
}
END_TEST

START_TEST(replace_x_4) {
  char input[BUFF_SIZE] = "sqrt(x) + tan(x)";
  char value_x[BUFF_SIZE] = "8";
  char *res = replace_x(input, value_x);
  ck_assert_str_eq(res, "sqrt(8) + tan(8)");
}
END_TEST

START_TEST(replace_x_5) {
  char input[BUFF_SIZE] = "log(x)";
  char value_x[BUFF_SIZE] = "2";
  char *res = replace_x(input, value_x);
  ck_assert_str_eq(res, "log(2)");
}
END_TEST

START_TEST(replace_x_6) {
  char input[BUFF_SIZE] = "ln(x)";
  char value_x[BUFF_SIZE] = "9";
  char *res = replace_x(input, value_x);
  ck_assert_str_eq(res, "ln(9)");
}
END_TEST

START_TEST(unary_1) {
  char input[BUFF_SIZE] = "5+7";
  char *res = unary(input);
  ck_assert_str_eq(res, "5+(-7)");
}
END_TEST

START_TEST(unary_2) {
  char input[BUFF_SIZE] = "25+9";
  char *res = unary(input);
  ck_assert_str_eq(res, "25+(-9)");
}
END_TEST

START_TEST(unary_3) {
  char input[BUFF_SIZE] = "50+(-5)";
  char *res = unary(input);
  ck_assert_str_eq(res, "50+5");
}
END_TEST

START_TEST(unary_4) {
  char input[BUFF_SIZE] = "7+(-5)";
  char *res = unary(input);
  ck_assert_str_eq(res, "7+5");
}
END_TEST

Suite *suite_validate(void) {
  Suite *s = suite_create("validate");
  TCase *tc = tcase_create("validate");
  tcase_add_test(tc, trig_reduce_1);
  tcase_add_test(tc, trig_reduce_2);
  tcase_add_test(tc, trig_reduce_3);
  tcase_add_test(tc, trig_reduce_4);
  tcase_add_test(tc, trig_reduce_5);
  tcase_add_test(tc, trig_reduce_6);
  tcase_add_test(tc, trig_reduce_7);
  tcase_add_test(tc, trig_reduce_8);
  tcase_add_test(tc, trig_reduce_9);
  tcase_add_test(tc, trig_reduce_10);

  tcase_add_test(tc, replace_x_1);
  tcase_add_test(tc, replace_x_2);
  tcase_add_test(tc, replace_x_3);
  tcase_add_test(tc, replace_x_4);
  tcase_add_test(tc, replace_x_5);
  tcase_add_test(tc, replace_x_6);

  tcase_add_test(tc, unary_1);
  tcase_add_test(tc, unary_2);
  tcase_add_test(tc, unary_3);
  tcase_add_test(tc, unary_4);

  suite_add_tcase(s, tc);
  return s;
}
