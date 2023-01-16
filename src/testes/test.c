#include "./test.h"

// #include "../main.h"

int main() {
  Suite* suites[] = {
      suite_validate(),
      //   suite_infix_to_postfix(),

      suite_arithmetic(),
      //   suite_trigonometric(),
  };

  // Suite* suites = suite_arithmetic();

  // int total = 0;
  for (int i = 0; i < 2; i++) {
    SRunner* sr = srunner_create(suites[i]);
    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);
    // total += srunner_ntests_failed(sr);
    srunner_free(sr);
    putchar('\n');
  }

  // SRunner* sr = srunner_create(suites);
  // srunner_set_fork_status(sr, CK_NOFORK);
  // srunner_run_all(sr, CK_NORMAL);
  // // total += srunner_ntests_failed(sr);
  // srunner_free(sr);

  // printf("Total errors: %d\n\n", total);
  return 0;
}
