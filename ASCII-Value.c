#include <stdio.h>

int main() {
  for (int i = 0; i <= 255; i++) {
    if (i == 28) {
      printf("\nTThe ASCII value for %d is %c\n", i, i);
    } else {
      printf("\nThe ASCII value for %d is %c\n", i, i);
    }
  }

  return 0;
}