#include<stdio.h>
#include "array_operations.c"
#define MAX 32
#define HELLO printf("hello\n");
#define LN printf("\n");
int main(){
    int x[MAX] = {0} ;
    char s[MAX];
    float f[MAX];
    int i,j,k,l;
    //ineger arary - squares of numbers
    for(i=0; i<MAX ; i++){
        x[i] = i*i;
    }

    //string
    for(i=0; i<MAX ; i++){
        s[i] = 4*i;
    }
     HELLO

    //flaot numbers
    for(i=0; i<MAX ; i++){
        f[i] = (float)i / 2.3;
    }

//    printf("sixze of x = %d \n" , sizeof(x)/sizeof(x[0]) );
    printIntArray(x, sizeof(x)/sizeof(x[0]));  LN LN
    printString(s, sizeof(s)/sizeof(s[0]));    LN LN
    printFloatArray(f, sizeof(f)/sizeof(f[0]));LN LN
    getchar();

}
