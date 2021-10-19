#include<stdio.h>

//void printTag()  cant do it as tag is defined inside main

int main(){
    struct tag {
        char * name;
        unsigned int num;
    };
    struct tag a,ab,abc;
    a.name = "sss";
    a.num = 1;


    int x ;
     x = 23;
     printf("the value at the address %d is  %d" , &x , x);
     printf("\ntag name : %s tag number: %d" , a.name , a.num);
}
