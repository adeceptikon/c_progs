#ifndef stdio 
#include<stdio.h>
#endif

int printIntArray(int a[] , int len){
    int i ;
    for (i=0; i<len; i++){
        printf("%d\t " , a[i]);
    }
}

int printLongArray(long a[] , int len){
    int i ;
    for (i=0; i<len; i++){
        printf("%d\t " , a[i]);
    }
}

int printFloatArray( float a[] , int len){
    int i ;
    for (i=0; i<len; i++){
        printf("%d\t " , a[i] );
    }
}

int printDoubleArray(double a[] , int len){
    int i ;
    for (i=0; i<len; i++){
        printf("%ld\t ", a[i] );
    }
}

int print(char* a , int len){
    printf("%s" , *a );
}


// int main(){
//     return 0;
// }