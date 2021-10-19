#include<stdio.h>

//made on 15th JAN 2021 ; masterstroke - single write - no consulting the answer - tested ok
int main(){
    long word_count = 0;
    int c;
    while ((c = getchar()) != EOF){
        if (c == ' ' || c== '\n' || c == '\t' ){
            continue;
        }
        else{
            while (c!=' ' && c!= '\t' && c!= '\n'){
                c=getchar();
            }
            word_count++;
        }
    }
    printf("\nThe no. of words is %d\n" ,word_count );
}
