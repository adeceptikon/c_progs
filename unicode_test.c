#include<stdio.h>
#define MAX_INT 37567
int main(){
    int c = 34353;
    wchar_t i = 0;
    FILE * tmp;
    tmp = fopen("tmp.txt" , "w+");
    fputs("क्ेिरतक े्रचते् चेत्कर िचते्किरच" , tmp);
    for(i=0 ; i< MAX_INT ; i++ ){
        fprintf(tmp , "%c ", i );
    }
    fclose(tmp);
    printf("तके्रितक्ेरतक");
}

