#include<stdio.h>
int print(char *s ){
    if( printf("%s\n" , s) ){
        return 0;
    }
    else return -1;

}
int main(){
    char *d = "jai hanuman";
    print(d);
}
