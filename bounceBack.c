#include<stdio.h>

int main(){
    int c ;
    while(c = getchar()){
        printf("%c" , c);
        if(c == EOF){
            return 0;
        }
    }
}
