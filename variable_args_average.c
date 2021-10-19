#include <stdio.h>
#include <stdarg.h>

double avg(int num , ...);
int main(){
    printf("Average of 34,56,67,78 is %f " , avg(4 ,34,56,67,78) );

}
/*
NOTES: 
    va_list = (a type)list of the arguments
    va_start(listVar , number of arguments) = macro to intitalize the list and the etc etc
    va_arg(listVar , type of argyments) = returns current argument and steps up to the next
    va_end(listVar) = to cleanup everything
*/

double avg (int num , ...){
    int sum = 0 , element;
    int i;
    va_list argList;
    va_start(argList, num);
    for(i = 0; i<num;i++){
        element =  va_arg(argList , int);
        sum = sum + element;
        printf("%d \t" ,element);
    }
    va_end(argList);

    return sum/num;

}