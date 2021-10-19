#include<stdio.h>

int main(int argc , char *argv[]){
    printf("no. of arguments: %d \n " , argc  );
    while(argc-- != 0){
        printf("%s\n" , argv[argc]);
    }
}
