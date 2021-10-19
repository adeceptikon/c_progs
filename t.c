#include<stdio.h>
#include "sss.h"
int main(){
    int x[50]= {2};
    int i;
    for (i= 23 ; i< 123; i++){
        printf("value at %d is %d \n" ,&x[i], x[i] );
    }
    printIntArray( x[50] , sizeof(x) / sizeof(x[0]) );
}