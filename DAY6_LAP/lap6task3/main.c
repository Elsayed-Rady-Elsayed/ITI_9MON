#include <stdio.h>
#include <stdlib.h>
int powerRec(int base,int power){
    if(power==0){
        return 1;
    }else{
        return base * powerRec(base,power-1);
    }
}
int main()
{
    int base,power,check;
    do{
        printf("enter the base:");
        _flushall();
        check = scanf("%i",&base);
    }while(check!=1);
    do{
        printf("enter the power:");
        _flushall();
        check = scanf("%i",&power);
    }while(check!=1);
    printf("%i ^ %i = %i",base,power,powerRec(base,power));
    return 0;
}
