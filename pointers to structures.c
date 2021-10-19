#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>

int main (){
    struct person {
        char *name ;
        char *number;
        int index;
    }  ;


    struct person p1 ,p2;
    struct person* pp1;
    p1.name = "shashank ";
    p1.number = "9046232854";
    p1.index = 1;
    pp1 = &p1;
    for (int i=0; i<2;i++ ){
            printf("%s" , *pp1 );
            printf("Here\n");
    }

    DIR* d;
    FILE* f;
    char a[255];
    struct dirent* c;
    d = opendir("C:/Users/sss" );
    while(c = readdir(d)){
            f = fopen(c , "r");
            fgets(a,24,f);
        printf("file: %s \n" , c->d_name);
        puts(a);
        printf("\n");
        fclose(f);
    }
    closedir(d);
//    printf("%s\n" , c.name);


}
