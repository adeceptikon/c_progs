#include<stdio.h>

long int square(long int n){
	return n*n;
}


int main(){
	long int  c;
	long int (*pointerToSquare)(long int n);//decalring a pointer to a function which returns long int and takes long int as argument ; 
	//ek pointer bana rahe hain jo long type wapis karega aur long type input lega
	c = 24;
	//
	pointerToSquare=  &square; // pointer ko function ki ooor assign kar re hain
	printf("The square of %d id  %d ", c , pointerToSquare(c)) ; // pointer jidhar bhi assigned hai us function ko call kar re hain  , ek aur tareeka hai call karne ka : (*pointerToSquare)(c);
	printf("\nthe square of %d is %d" , c ,	(*pointerToSquare)(c) );
	
}
