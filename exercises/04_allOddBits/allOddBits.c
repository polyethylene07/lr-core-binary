#include <stdio.h>

/*
 * allOddBits - return 1 if all odd-numbered bits in word set to 1
 *   where bits are numbered from 0 (least significant) to 31 (most significant)
 *   Examples allOddBits(0xFFFFFFFD) = 0, allOddBits(0xAAAAAAAA) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */
int allOddBits(int x) {
  int mask = 0x000000AA + (0x000000AA << 8) + (0x000000AA << 16) + (0x000000AA << 24);
  // int i = 1;
  // int mask = 0;
  // do{
  //   mask += (1 << i);
  //   i += 2;
  // }while(i <= 31);
  return !(x & mask ^ mask);
//#error TODO: Return 1 if every odd-numbered bit of x is set.
}

int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", allOddBits(x));
  return 0;
}
