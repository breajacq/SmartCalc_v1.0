#include "./main.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculate(char* str) {
  if (str) {
    if (validation(str)) {
      strcpy(str, "ERROR!");
    } else {
      // strcpy(str, "CORRECT!");
      char* str_z = NULL;
      str_z = add_zero(str);
      lex_n stack[BUFF_SIZE] = {{0}};  // Input
      int count_struct = 0;

      if (str_z != NULL) {
        count_struct = createStack(str_z, stack);
        free(str_z);
      } else {
        count_struct = createStack(str, stack);
      }

      char* new_str = convert_to_postfix(stack, count_struct);

      strcpy(str, new_str);
      free(new_str);
    }
  }
}

int validation(char* str) {
  int err_code = 0;
  state option = {0};

  if (str[0] == ')' || str[0] == '*' || str[0] == '/' || str[0] == '%') {
    err_code = 1;
  } else if (err_code == 0) {
    int str_len = (int)strlen(str);
    for (int i = 0; i < str_len; i++) {
      if (option.error) {
        break;
      }

      if (str[i] >= '0' && str[i] <= '9') {
        int j = i;
        while ((str[j] >= '0' && str[j] <= '9') || str[j] == '.') {
          if (str[j] == '.') option.point++;
          j++;
        }
        if (option.point > 1) {
          option.error = 1;
          option.point = 0;
        }
        if (option.error) break;
        state_to_null(&option);
        option.is_reading_numb = 1;
      } else if (str[i] == '(') {
        state_to_null(&option);
        option.bracket++;
        if ((str[i - 1] >= '0' && str[i - 1] <= '9') || str[i - 1] == '.') {
          option.error = 1;
        } else if (str[i + 1] == '*' || str[i + 1] == '/' ||
                   str[i + 1] == '%' || str[i + 1] == '.') {
          option.error = 1;
        }
      } else if (str[i] == ')') {
        option.bracket++;
        if (!(str[i - 1] >= '0' && str[i - 1] <= '9') && str[i - 1] != 'x') {
          option.error = 1;
        }
      } else if (str[i] == 'c' || str[i] == 's' || str[i] == 't' ||
                 str[i] == 'l' || str[i] == 'a' || str[i] == 'x') {
        state_to_null(&option);
      } else if (option.operators) {
        if (!option.is_reading_numb && !option.point && !option.error &&
            !option.bracket) {
          option.error = 1;
        }
      } else if (str[i] == '+' || str[i] == '-' || str[i] == '*' ||
                 str[i] == '/' || str[i] == '%') {
        state_to_null(&option);
        option.operators = 1;
      }

      if (i == str_len - 2) {
        if (!(str[i + 1] >= '0' && str[i + 1] <= '9') && str[i + 1] != ')') {
          option.error = 1;
        }
      }
    }
  }

  if (option.bracket % 2 != 0) {
    option.error = 1;
  }

  if (option.error) err_code = option.error;

  return err_code;
}

void state_to_null(state* option) {
  option->is_reading_numb = 0;
  option->point = 0;
  option->error = 0;
  option->operators = 0;
}

void trig_reduce(char* str) {
  if (strcmp(str, "cos(x)") == 0) {
    strcpy(str, "cos(");
  } else if (strcmp(str, "sin(x)") == 0) {
    strcpy(str, "sin(");
  } else if (strcmp(str, "tan(x)") == 0) {
    strcpy(str, "tan(");
  } else if (strcmp(str, "log(x)") == 0) {
    strcpy(str, "log(");
  } else if (strcmp(str, "sqrt(x)") == 0) {
    strcpy(str, "sqrt(");
  } else if (strcmp(str, "acos(x)") == 0) {
    strcpy(str, "acos(");
  } else if (strcmp(str, "asin(x)") == 0) {
    strcpy(str, "asin(");
  } else if (strcmp(str, "atan(x)") == 0) {
    strcpy(str, "atan(");
  } else if (strcmp(str, "ln(x)") == 0) {
    strcpy(str, "ln(");
  } else if (strcmp(str, "(x)") == 0) {
    strcpy(str, "x");
  }
}

int createStack(char* str, lex_n* stack) {
  int count_struct = 0;
  if (stack) {
    count_struct =
        tokenization(str, stack);  // need to allocate memory for stack
  }

  return count_struct;
}

int tokenization(char* str, lex_n* stack) {
  int count_struct = 0;

  int i = 0;
  while (str[i]) {
    if (str[i] >= '0' && str[i] <= '9') {
      lex_n tmp = {0};
      double num = 0;
      num = parse_num(str, i);
      tmp.value = num;

      while ((str[i] >= '0' && str[i] <= '9') || str[i] == '.') {
        i++;
      }
      i -= 1;
      stack[count_struct] = tmp;
      count_struct++;
    } else if (str[i] == '^') {
      lex_n tmp = {0};
      handle_state(&tmp, str, &i);
      stack[count_struct] = tmp;
      count_struct++;
    } else if (str[i] == '+' || str[i] == '-') {
      lex_n tmp = {0};
      handle_state(&tmp, str, &i);
      stack[count_struct] = tmp;
      count_struct++;
    } else if (str[i] == '*' || str[i] == '/' || str[i] == '%') {
      lex_n tmp = {0};
      handle_state(&tmp, str, &i);
      stack[count_struct] = tmp;
      count_struct++;
    } else if (str[i] == 'c' || str[i] == 's' || str[i] == 't' ||
               str[i] == 'l' || str[i] == 'a') {
      lex_n tmp = {0};
      handle_state(&tmp, str, &i);
      stack[count_struct] = tmp;
      count_struct++;
    } else if (str[i] == '(' || str[i] == ')') {
      lex_n tmp = {0};
      handle_state(&tmp, str, &i);
      stack[count_struct] = tmp;
      count_struct++;
    }
    i++;
  }

  return count_struct;
}

double parse_num(char* str, int i) {
  double num = 0;
  num = atof(&str[i]);

  return num;
}

void handle_state(lex_n* tmp, char* str, int* i) {
  int index = *i;

  switch (*(str + index)) {
    case '^':
      tmp->_operator = POWER;
      tmp->priority = 3;
      break;
    case '+':
      tmp->_operator = PLUS;
      tmp->priority = 1;
      break;
    case '-':
      tmp->_operator = MINUS;
      tmp->priority = 1;
      break;
    case '*':
      tmp->_operator = MUL;
      tmp->priority = 2;
      break;
    case '/':
      tmp->_operator = DIV;
      tmp->priority = 2;
      break;
    case '%':
      tmp->_operator = MOD;
      tmp->priority = 2;
      break;
    case 'c':
      tmp->_operator = COS;
      tmp->priority = 4;
      while (*(str + index) != '(') {
        index++;
      }
      *i = index - 1;
      break;
    case 's':
      // sin sqrt
      if (*(str + index + 1) == 'i') {
        tmp->_operator = SIN;
        tmp->priority = 4;
      } else {
        tmp->_operator = SQRT;
        tmp->priority = 4;
      }
      while (*(str + index) != '(') {
        index++;
      }
      *i = index - 1;
      break;
    case 't':
      tmp->_operator = TAN;
      tmp->priority = 4;
      while (*(str + index) != '(') {
        index++;
      }
      *i = index - 1;
      break;
    case 'l':
      // ln log
      if (*(str + index + 1) == 'n') {
        tmp->_operator = LN;
        tmp->priority = 4;
      } else {
        tmp->_operator = LOG;
        tmp->priority = 4;
      }
      while (*(str + index) != '(') {
        index++;
      }
      *i = index - 1;
      break;
    case 'a':
      // acos asin atan
      if (*(str + index + 1) == 'c') {
        tmp->_operator = ACOS;
        tmp->priority = 4;
      } else if (*(str + index + 1) == 's') {
        tmp->_operator = ASIN;
        tmp->priority = 4;
      } else {
        tmp->_operator = ATAN;
        tmp->priority = 4;
      }
      while (*(str + index) != '(') {
        index++;
      }
      *i = index - 1;
      break;
    case '(':
      tmp->_operator = S_BRACKET;
      tmp->priority = 5;
      break;
    case ')':
      tmp->_operator = E_BRACKET;
      tmp->priority = 5;
      break;
    default:
      break;
  }
}

char* convert_to_postfix(lex_n* input, int count_struct) {
  stack_n ready[BUFF_SIZE] = {0};
  lex_n support[BUFF_SIZE] = {{0}};  // tokens-operations

  int j = 0, k = 0;
  for (int i = 0; i < count_struct; i++) {
    if (input[i]._operator == 0) {
      ready[j].stack = input[i];
      j++;
    } else if (input[i].priority == 4) {
      support[k] = input[i];
      k++;
    } else if (input[i]._operator == S_BRACKET) {
      support[k] = input[i];
      k++;
    } else if (input[i]._operator == E_BRACKET) {
      while (support[k - 1]._operator != S_BRACKET) {
        ready[j].stack = support[k - 1];
        lex_to_null(&support[k - 1]);
        j++;
        k--;
      }

      if (support[k - 1]._operator == S_BRACKET) {
        lex_to_null(&support[k - 1]);
        k--;
      } else if (support[k - 1].priority == 4) {
        ready[j].stack = support[k - 1];
        lex_to_null(&support[k - 1]);
        k--;
      }
    } else {
      while (support[k - 1]._operator != S_BRACKET &&
             support[k - 1].priority >= input[i].priority &&
             (support[k - 1]._operator && input[i]._operator != POWER)) {
        ready[j].stack = support[k - 1];
        support[k - 1] = input[i];
        j++;
        k--;
      }
      support[k] = input[i];
      k++;
    }
  }

  while (support[k - 1]._operator && k > 0) {
    if (support[k - 1]._operator != S_BRACKET) {
      ready[j].stack = support[k - 1];
      lex_to_null(&support[k - 1]);
      k--;
      j++;
    }
  }

  char* str = calc_postfix(ready, j);

  return str;
}

char* calc_postfix(stack_n* input, int length) {
  char* str = calloc(BUFF_SIZE, sizeof(char));
  lex_n tok_operations[BUFF_SIZE] = {{0}};  // second tokens-operations

  int i = 0, j = 0;
  for (; i < length; i++) {
    if (input[i].stack._operator == 0) {
      tok_operations[j] = input[i].stack;
      j++;
    } else if (input[i].stack._operator == PLUS) {
      lex_n tmp_value = {0};
      tmp_value.value =
          tok_operations[j - 2].value + tok_operations[j - 1].value;
      tok_operations[j - 2] = tmp_value;
      j -= 1;
    } else if (input[i].stack._operator == MINUS) {
      lex_n tmp_value = {0};
      tmp_value.value =
          tok_operations[j - 2].value - tok_operations[j - 1].value;
      tok_operations[j - 2] = tmp_value;
      j -= 1;
    } else if (input[i].stack._operator == MUL) {
      lex_n tmp_value = {0};
      tmp_value.value =
          tok_operations[j - 2].value * tok_operations[j - 1].value;
      tok_operations[j - 2] = tmp_value;
      j -= 1;
    } else if (input[i].stack._operator == DIV) {
      lex_n tmp_value = {0};
      tmp_value.value =
          tok_operations[j - 2].value / tok_operations[j - 1].value;
      tok_operations[j - 2] = tmp_value;
      j -= 1;
    } else if (input[i].stack._operator == MOD) {
      lex_n tmp_value = {0};
      tmp_value.value =
          fmod(tok_operations[j - 2].value, tok_operations[j - 1].value);
      tok_operations[j - 2] = tmp_value;
      j -= 1;
    } else if (input[i].stack._operator == POWER) {
      lex_n tmp_value = {0};
      tmp_value.value =
          pow(tok_operations[j - 2].value, tok_operations[j - 1].value);
      tok_operations[j - 2] = tmp_value;
      j -= 1;
    } else if (input[i].stack._operator == SQRT) {
      lex_n tmp_value = {0};
      tmp_value.value = sqrt(tok_operations[j - 1].value);
      tok_operations[j - 1] = tmp_value;
    } else if (input[i].stack._operator == ACOS) {
      lex_n tmp_value = {0};
      tmp_value.value = acos(tok_operations[j - 1].value);
      tok_operations[j - 1] = tmp_value;
    } else if (input[i].stack._operator == ASIN) {
      lex_n tmp_value = {0};
      tmp_value.value = asin(tok_operations[j - 1].value);
      tok_operations[j - 1] = tmp_value;
    } else if (input[i].stack._operator == ATAN) {
      lex_n tmp_value = {0};
      tmp_value.value = atan(tok_operations[j - 1].value);
      tok_operations[j - 1] = tmp_value;
    } else if (input[i].stack._operator == SIN) {
      lex_n tmp_value = {0};
      tmp_value.value = sin(tok_operations[j - 1].value);
      tok_operations[j - 1] = tmp_value;
    } else if (input[i].stack._operator == COS) {
      lex_n tmp_value = {0};
      tmp_value.value = cos(tok_operations[j - 1].value);
      tok_operations[j - 1] = tmp_value;
    } else if (input[i].stack._operator == TAN) {
      lex_n tmp_value = {0};
      tmp_value.value = tan(tok_operations[j - 1].value);
      tok_operations[j - 1] = tmp_value;
    } else if (input[i].stack._operator == LN) {
      lex_n tmp_value = {0};
      tmp_value.value = log(tok_operations[j - 1].value);
      tok_operations[j - 1] = tmp_value;
    } else if (input[i].stack._operator == LOG) {
      lex_n tmp_value = {0};
      tmp_value.value = log10(tok_operations[j - 1].value);
      tok_operations[j - 1] = tmp_value;
    }
  }

  if (NULL != str) {
    snprintf(str, BUFF_SIZE, "%lf", tok_operations[0].value);
  }

  return str;
}

void lex_to_null(lex_n* tmp) {
  tmp->_operator = 0;
  tmp->priority = 0;
  tmp->value = 0;
}

char* replace_x(char* str, char* value_x) {
  char* new_str = replace_string(str, value_x);

  return new_str;
}

char* replace_string(char* str, char* replace_str) {
  char* res = calloc(BUFF_SIZE, sizeof(char));
  int j = 0;

  for (int i = 0; i < (int)strlen(str);) {
    int e = 0;
    if (str[i] == 'x') {
      if (i > 0) {
        if (str[i - 1] != '(') {
          res[j] = '(';
          j++;
          e = 1;
        }
      }

      for (int k = 0; k < (int)strlen(replace_str); k++) {
        res[j] = replace_str[k];
        j++;
      }
      if (e) {
        res[j] = ')';
        j++;
      }
      i++;
    } else {
      res[j] = str[i];
      j++;
      i++;
    }
  }

  return res;
}

char* unary(char* str) {
  char* new_str = NULL;
  char* new_str1 = NULL;
  int str_len = strlen(str);
  int j = str_len - 1;

  while ((str[j] >= '0' && str[j] <= '9') || str[j] == ')' || str[j] == '.') {
    j--;
  }

  if (str[j] == '-') {
    if (str[j - 1] == '(') {
      new_str1 = calloc(str_len, sizeof(char));
      int k = 0;
      for (int i = 0; i < str_len; i++) {
        if (i == j || i == j - 1 || i == str_len - 1) {
        } else {
          new_str1[k] = str[i];
          k++;
        }
      }
    } else {
      new_str = s21_insert(str, "(", j + 1);
      new_str1 = s21_insert(new_str, "-", j + 2);
      new_str1[strlen(new_str1)] = ')';
    }
  } else {
    new_str = s21_insert(str, "(", j + 1);
    new_str1 = s21_insert(new_str, "-", j + 2);
    new_str1[strlen(new_str1)] = ')';
  }

  return new_str1;
}

void* s21_insert(const char* src, const char* str, int start_index) {
  int index = start_index;
  char* new_str = NULL;
  if (src != NULL || (src == NULL && index == 0 && str != NULL)) {
    int src_len = src == NULL ? 0 : strlen(src);
    if (index <= src_len) {
      int str_len = str == NULL ? 0 : strlen(str);
      int tot_len = src_len + str_len;
      new_str = calloc(tot_len + 1, sizeof(char));
      if (new_str != NULL) {
        int i;
        for (i = 0; i < tot_len; i++) {
          if (i < index) {
            new_str[i] = src[i];
          } else if (i < str_len + index) {
            new_str[i] = str[i - index];
          } else {
            new_str[i] = src[i - str_len];
          }
        }
      }
    }
  }
  return new_str;
}

char* add_zero(char* str) {
  char* res = NULL;
  int count = 0;
  if (str[0] == '-') count++;

  for (int k = 0; k < (int)strlen(str); k++) {
    if (str[k] == '(') {
      if (str[k + 1] == '-') {
        count++;
      }
    }
  }

  if (count >= 1) {
    res = calloc(BUFF_SIZE, sizeof(char));
    int i = 0, j = 0;
    if (str[0] == '-') {
      res[0] = '0';
      j++;
    }
    for (; i < (int)strlen(str); i++) {
      if (str[i] == '(') {
        if (str[i + 1] == '-') {
          res[j] = str[i];
          j++;
          res[j] = '0';
          j++;
        }
      } else {
        res[j] = str[i];
        j++;
      }
    }
  }

  return res;
}