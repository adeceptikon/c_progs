#include <stdio.h>
#include<stdlib.h>
#include<dirent.h>
//#inlcude<regex.h>

int main(){
    DIR *  d;
    int i = 0;
    d = opendir("./");
    struct dirent* r;

    for(i = 0; (r = readdir(d)) && i<10; i++){
        printf("%s\n" , r->d_name);
    }
}
