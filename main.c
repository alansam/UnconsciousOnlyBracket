#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int sum(int a, int b) {
  int sum;
  sum = a + b;
  return sum;
}

int main(int argc, char *argv[]) {
//  int a = 5;
//  printf("%d %d %d %d\n", a++, ++a, ++a, a++);

  int (*y)(int, int);
  y = &sum;
  printf("%d\n", y(5, 6));
}
