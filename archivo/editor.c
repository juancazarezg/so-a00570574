#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>



int main(int argc,char **argv){
    char *fileName = argv[1];
    char word[100];
    char c;
    int fd = open(fileName,O_RDONLY);
    int fd2 = open("tmp.txt",O_WRONLY | O_CREAT, 0666);
    int i = 0;

    while(read(fd,&c,1)){
        if(c!= ' '){
            word[i++] = c;
        }else{
            word[i] = '\0';
            i = 0;
            
            if(!strcmp(word, argv[2])){
                write(fd2,argv[3], strlen(argv[3]));
                write(fd2," ", 1);
            }else{
                write(fd2,word, strlen(word));
                write(fd2," ", 1);
            }
        }
    }
    word[i] = '\0';
    if(!strcmp(word, argv[2])){
         write(fd2,argv[3], strlen(argv[3]));
        write(fd2," ", 1);
    }else{
         write(fd2,word, strlen(word));
         write(fd2," ", 1);
     }
    
    close(fd);
    close(fd2);
    unlink(fileName);
    link("tmp.txt",fileName);
    unlink("tmp.txt");
    return 0;
}  