#include<stdio.h>
void display();

struct Fruit {
        char* name;
        int type;
        void (*reveal)(struct Fruit);
        //reveal = &display; can't do this
    };


char* parseLine(char *s){

    static char  line[1024] ;
    char* c;
    int i;
}


int main(){

    struct Fruit  banana , apple , guava;
    banana.name = "banana";
    apple.name = "apple";
    banana.type  = 12;
    apple.type=123;
    display(banana);
}

void display(struct Fruit ft){
    printf("%s \n " , ft.name);
}
