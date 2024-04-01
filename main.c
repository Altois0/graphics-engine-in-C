#include <stdio.h>

int main(void) {
  int position = 0;
  int repeatMovement = 0;
  char direction = 0;
  while (repeatMovement == 0) {

    // input detection
    printf("ready");
    scanf("%c", &direction);
    switch (direction) {
    case 'a':
      position--;
      break;

    case 'd':
      position++;
      break;
    case 'n':
      position = position;

    default:
      printf("error");
      break;
    }

    // print
    switch (position) {
    case (1):
      printf("1000000000");
      break;

    case (2):
      printf("0100000000");
      break;

    case (3):
      printf("0010000000");
      break;

    case (4):
      printf("0001000000");
      break;

    case (5):
      printf("0000100000");
      break;

    case (6):
      printf("0000010000");
      break;

    case (7):
      printf("0000001000");
      break;

    case (8):
      printf("0000000100");
      break;

    case (9):
      printf("0000000010");
      break;

    case (10):
      printf("0000000001");
      break;

    default:
      printf("error");
      break;
    }
    repeatMovement = 0;
  }
}
