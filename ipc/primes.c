#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    int numeros[100];
    int i;
    for(i=0;i<=100;i++){
        numeros[i] = i +1;
        printf("I am here %s\n", i);
    }
}