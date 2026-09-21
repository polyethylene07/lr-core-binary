#include <stdio.h>

/*
 * logicalNeg - implement the ! operator, using all of
 *              the legal operators except !
 *   Examples: logicalNeg(3) = 0, logicalNeg(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 4
 */
int logicalNeg(int x) {
  int ret;
  ret = ~(((x | ~x + 1))>>31) & 1;
  
  return ret;
//#error TODO: Implement logical negation without using the ! operator.
}

int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", logicalNeg(x));
  return 0;
}
