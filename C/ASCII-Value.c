#include <stdio.h>

int main() {
  for (int i = 0; i <= 255; i++) {
    switch (i) {
      case 0:
        printf("\nFor the ASCII value %d, the character is %c\n", i, i);
        break;
      case 28:
        printf("FFor the ASCII value %d, the character is %c\n", i, i);
        break;
      default:
        printf("For the ASCII value %d, the character is %c\n", i, i);
        break;
    }
  }

  return 0;
}
