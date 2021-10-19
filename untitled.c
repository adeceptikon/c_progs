#include<stdio.h>


int asciiValue(char s);

int main(){
	int c;
	int (*p)(char s);
	p =&asciiValue;
	//c = (*p)('s');  both works
	c = p('s');
}

int asciiValue(char s){
	int c ;
	c = s;
	return c; 
}

