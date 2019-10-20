#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int num = 2;

    fprintf(stderr,"%d\n",2);
    fprintf(stderr,"%d\n",3);
    fprintf(stderr,"%d\n",5);
    fprintf(stderr,"%d\n",7);
    fprintf(stderr,"%d\n",11);

  while(1){
    scanf("%d\n",&num);
    if(num == -1){
      break;
    }
    if(num % 11 != 0){
      fprintf(stderr,"%d\n",num);
    }
  }
  fprintf(stderr, "completado\n");
}