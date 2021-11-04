#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a, b, c;

  printf("Digite 3 números: ");
  scanf("%d %d %d", &a, &b, &c);

  if ((a > b) && (a > c)){
    printf("O maior número foi %d.", a);    
  } else {
    if ((b > c) && (b > a)){
      printf("O maior número foi %d.", b);
    } else {
      printf("O maior número foi %d.", c);
    }
  }
  return 0;
}