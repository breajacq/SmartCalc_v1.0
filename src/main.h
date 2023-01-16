#ifndef SRC_MAIN_H_

#define SRC_MAIN_H_

#define BUFF_SIZE 256

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct state {
  int is_reading_numb;
  int operators;
  int point;
  int bracket;
  int error;
  int func;
} state;

typedef enum type_t {
  PLUS = 1,
  MINUS,
  MUL,
  DIV,
  MOD,
  POWER,
  SQRT,
  ACOS,
  ASIN,
  ATAN,
  SIN,
  COS,
  TAN,
  LN,
  LOG,
  S_BRACKET,
  E_BRACKET
} type_t;

typedef struct {
  double value;
  int priority;
  type_t _operator;
} lex_n;

typedef struct {
  lex_n stack;
  int top;
  int capacity;
} stack_n;

void calculate(char* str);
void trig_reduce(char* str);
char* unary(char* str);
int validation(char* str);
void state_to_null(state* option);
int createStack(char* str, lex_n* stack);
int tokenization(char* str, lex_n* stack);
double parse_num(char* str, int i);
void handle_state(lex_n* tmp, char* str, int* i);
char* convert_to_postfix(lex_n* input, int count_struct);
char* calc_postfix(stack_n* input, int length);
void lex_to_null(lex_n* tmp);
char* replace_x(char* str, char* value_x);
void* s21_insert(const char* src, const char* str, int start_index);
char* replace_string(char* str, char* replace_str);
void* s21_insert(const char* src, const char* str, int start_index);
char* add_zero(char* str);

#endif  // SRC_MAIN_H_