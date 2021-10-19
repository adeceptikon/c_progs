#include<stdio.h>
#include<stdlib.h>
#include ".\lib\IOextended.h"

int main(){
        int x;
        srand();
        x = rand();
        putl(x);
        LINE;
}

void putl(int x ){
    printf("%d", x );
}
