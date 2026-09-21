#include <stdio.h>

/*
 * bitXor - x^y using only ~ and &
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 *   Rating: 1
 */
int bitXor(int x, int y) {
  int i = 0;
  i += (x & ~y) + (~x & y);
  return i;
//#error TODO: Implement bitXor using only ~ and &.
}

int main(void) {
  int x, y;
  if (scanf("%d %d", &x, &y) != 2)
    return 1;
  printf("%d\n", bitXor(x, y));
  return 0;
}
