#include<stdio.h>
#define MAX 32
struct node {
    char* data ;
    struct node* next;
} linkList[MAX];

void printList(struct node linkList[]);

struct node* start = NULL;

int main(){
int i ;
for (i =0 ; i< MAX -2; i++){
    linkList[i].data = "Hello Everyone";
    //printf("Hello Everyone");
    linkList[i].next = &linkList[i+1];
}
start = &linkList[0];
printList(linkList);

}

void printList(struct node linkList[MAX]){
    int i;
    for(i=0; linkList[i].next != NULL; i++){
        printf("The data in node %d is %s \n " , i , linkList[i].data);
    }

}