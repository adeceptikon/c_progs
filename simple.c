#include<stdio.h>

/* identifier names cannot contain - because it conflicts with subtraction of two variables */

void get-word();

int main(){
    char *s;
    get-word();
}

void get-word(){
    char *s ;
    scanf("%s" , &s);
}
