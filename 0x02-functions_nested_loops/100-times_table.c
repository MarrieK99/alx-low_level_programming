#include <stdio.h>
#include "main.h"

void print_times_table(int n) {
  if (n > 15 || n < 0) {
    return;
  }
int i;
  for (i = 0; i <= 10; i++) {
int j;
    for (j = 1; j <= n; j++) {
      _putchar(i * j + '0');
      if (j < n) {
        _putchar(' ');
      }
    }
    _putchar('\n');
  }
}
