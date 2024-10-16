#include <stdio.h>
#include <stdlib.h>

int isLeapYear(int y){
    return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
}
int FindNumOfDays(int m,int y){
    if(m==2){
        return isLeapYear(y)?29:28;
    }else if(m==4||m==6||m==9||m==11){
        return 30;
    }else{
        return 31;
    }
}
int main()
{
    char WantToEnd;
    do{
        int totalDaysOfMonth,currentDay=16,currentMonth=10,currentYear=2024;
        int day,month,year;
        do{
        printf("please enter your year:");
        _flushall();
        scanf("%i",&year);
        }while(year<1980||year>2024);
        do{
        printf("please enter your month:");
        _flushall();
        scanf("%i",&month);
        }while(month<1||month>12);
        do{
        printf("please enter your day:");
        _flushall();
        scanf("%i",&day);
        totalDaysOfMonth = day;
        }while(day<1||day>FindNumOfDays(month,year));
        int resultYear = currentYear - year,resultMonth = currentMonth-month,resultDaye = currentDay- day;
        if(resultDaye<0){
            resultDaye += FindNumOfDays(currentMonth--,currentYear);
            resultMonth--;
        }
        if(resultMonth<0){
            resultMonth+=12;
            resultYear--;
        }
        printf("you are %i y %i months and %i days \n",resultYear,resultMonth,resultDaye);
        printf("press n to end otherwise press y");
        _flushall();
        scanf("%c",&WantToEnd);
        }while(WantToEnd != 'n');


    return 0;
}
