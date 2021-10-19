//console program prints english small alphabet onto the screen
#include<stdio.h>

int main(){
    char alphabetSmall[26] ;
    int i , j;
    for (i=0; i<26; i++){
           alphabetSmall[i] = 'a' + i;  //the tricky part
    }
    for (i=0; i<26; i++){
        printf("%c " ,alphabetSmall[i] );
    }

}
