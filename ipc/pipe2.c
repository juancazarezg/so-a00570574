#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int num = 2;

  while(1){
    scanf("%d\n",&num);
    if(num == -1){
      break;
    }
    if(num % 2 != 0){
      printf("%d\n",num);
    }
  }

  printf("%d\n",-1);
}