#include<stdio.h>


struct node {
    int c ;
    int* next;
};
void printNode(struct node a);

int main(){
    struct node a , b ,c ;
    a.c = 23;
    b.c = a.c + a.c;
    c.c = a.c + b.c ;
    printNode(a);
    printNode(b);
    printNode(c);
}

void printNode(struct node a){
    printf("%d\n" , a.c);
}
