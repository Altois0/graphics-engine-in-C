#include <stdio.h>

int main(void) {
  int position = 0;
  int repeatMovement = 0;
  char direction = 0;
  while (repeatMovement == 0) {

    // input
    scanf("%c", &direction);
    switch (direction) {
    case 'a':
      position--;
      break;

    case 'd':
      position++;
      break;

    case 'w':
      position = position + 10;
      break;

    case 's':
      position = position - 10;
      break;

    case 'n':
      position = position;

    default:
      printf("\n");
      break;
    }

    // printr
    switch (position) {
    case (1):
      printf("0000000000\n0000000000\n0000000000\n1000000000\n\n");
      break;

    case (2):
      printf("0000000000\n0000000000\n0000000000\n0100000000\n\n");
      break;

    case (3):
      printf("0000000000\n0000000000\n0000000000\n0010000000\n\n");
      break;

    case (4):
      printf("0000000000\n0000000000\n0000000000\n0001000000\n\n");
      break;

    case (5):
      printf("0000000000\n0000000000\n0000000000\n0000100000\n\n");
      break;

    case (6):
      printf("0000000000\n0000000000\n0000000000\n0000010000\n\n");
      break;

    case (7):
      printf("0000000000\n0000000000\n0000000000\n0000001000\n\n");
      break;

    case (8):
      printf("0000000000\n0000000000\n0000000000\n0000000100\n\n");
      break;

    case (9):
      printf("0000000000\n0000000000\n0000000000\n0000000010\n\n");
      break;

    case (10):
      printf("0000000000\n0000000000\n0000000000\n0000000001\n\n");
      break;

    case (11):
      printf("0000000000\n0000000000\n1000000000\n0000000000\n\n");
      break;
    case (12):
      printf("0000000000\n0000000000\n0100000000\n0000000000\n\n");
      break;

    case (13):
      printf("0000000000\n0000000000\n0010000000\n0000000000\n\n");
      break;

    case (14):
      printf("0000000000\n0000000000\n0001000000\n0000000000\n\n");
      break;

    case (15):
      printf("0000000000\n0000000000\n0000100000\n0000000000\n\n");
      break;

    case (16):
      printf("0000000000\n0000000000\n0000010000\n0000000000\n\n");
      break;

    case (17):
      printf("0000000000\n0000000000\n0000001000\n0000000000\n\n");
      break;

    case (18):
      printf("0000000000\n0000000000\n0000000100\n0000000000\n\n");
      break;

    case (19):
      printf("0000000000\n0000000000\n0000000010\n0000000000\n\n");
      break;

    case (20):
      printf("0000000000\n1000000000\n0000000000\n0000000000\n\n");
      break;

    case (21):
      printf("0000000000\n0100000000\n0000000000\n0000000000\n\n");
      break;

    case (22):
      printf("0000000000\n0010000000\n0000000000\n0000000000\n\n");
      break;

    case (23):
      printf("0000000000\n0001000000\n0000000000\n0000000000\n\n");
      break;

    case (24):
      printf("0000000000\n00001000000\n0000000000\n0000000000\n\n");
      break;

    case (25):
      printf("0000000000\n0000010000\n0000000000\n0000000000\n\n");
      break;

    case (26):
      printf("0000000000\n0000001000\n0000000000\n0000000000\n\n");
      break;

    case (27):
      printf("0000000000\n0000000100\n0000000000\n0000000000\n\n");
      break;

    case (28):
      printf("0000000000\n0000000010\n0000000000\n0000000000\n\n");
      break;

    case (29):
      printf("0000000000\n0000000001\n0000000000\n0000000000\n\n");
      break;

    case (30):
      printf("1000000000\n0000000000\n0000000000\n0000000000\n\n");
      break;

    case (31):
      printf("0100000000\n0000000000\n0000000000\n0000000000\n\n");
      break;

    case (32):
      printf("0010000000\n0000000000\n0000000000\n0000000000\n\n");
      break;

    case (33):
      printf("0001000000\n0000000000\n0000000000\n0000000000\n\n");
      break;

    case (34):
      printf("0000100000\n0000000000\n0000000000\n0000000000\n\n");
      break;

    case (35):
      printf("0000010000\n0000000000\n0000000000\n0000000000\n\n");
      break;

    case (36):
      printf("0000001000\n0000000000\n0000000000\n0000000000\n\n");
      break;

    case (37):
      printf("0000000100\n0000000000\n0000000000\n0000000000\n\n");
      break;

    case (38):
      printf("0000000010\n0000000000\n0000000000\n0000000000\n\n");
      break;

    case (39):
      printf("0000000001\n0000000000\n0000000000\n0000000000\n\n");
      break;

    default:
      printf("\n");
      break;
    }
  }
}
