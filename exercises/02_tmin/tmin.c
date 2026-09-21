#include <stdio.h>

/*
 * tmin - return minimum two's complement integer
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmin(void) {
  int i = 1;
  return (1 << 31);
//#error TODO: Return the minimum 32-bit two's-complement integer
}

int main(void) {
  printf("%d\n", tmin());
  return 0;
}
