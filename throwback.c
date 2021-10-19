#include<stdio.h>


int main(int argc , char*argv[]){
    int a;
    char delimiter = ';';
    char replacement[] = "\n";
    int c ;
    char welcome_message[] = "throwback.exe chalu ho gaya\n" ;// delimiter = ';' \treplacement = 'newline 'newline\\n'\n\n\n";
    printf("\nDefault delimter= ';' Enter character to change delimiter: \t");
    if((a = getchar()) != '\n'){
         delimiter = a ;
    }

    printf("%s delimiter = %c replacement = 'newline'\n" , welcome_message , delimiter);
    while ((c= getchar()) != EOF){
        if (c == delimiter){
            printf("%s", replacement);
        }
        else {
            printf("%c", c );
        }

    }
}
