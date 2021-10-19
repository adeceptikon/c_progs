#include<stdio.h>
#include <time.h>

#define LINE printf("\n")
int main(){
    time_t calendarTime;
    time_t *tp;
    char *s ;

    if(calendarTime = time(NULL))
        tp = &calendarTime;
    // struct tm *t ;
    // t = localtime(calendarTime);

    s = ctime(tp);
    printf("time is  %s " , s  );LINE;
//     printf("week day %d" , t->tm_wday );LINE;
//     printf("year %d" , t->tm_year );LINE;
//     printf("hour %d" , t->tm_hour );LINE;
//     printf("month %d" , t->tm_mon );LINE;
//     printf("month day %d" , t->tm_mday );LINE;
// LINE;
}