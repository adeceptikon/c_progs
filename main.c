#include <stdio.h>
#include <stdlib.h>
#include "evaluate.c"
#include "calc.h"
#include "addition.c"

int main()
{
    char* format  = "8 + 3 - 4 + 90 + (8/4) , spaces don't matter";
    char input_expression[MAX_EXPRESSION_LENGTH];
    printf("\
            Welcome to calulator.\n \
           Please write the expressions in the following format\n \
           e.g. %s\n \
           Note: MAX length of expression is 1024 characters\n" , format);
    scanf("%s" , &input_expression );

    printf("%s", evaluate_expression(input_expression));
    return 0;
}
