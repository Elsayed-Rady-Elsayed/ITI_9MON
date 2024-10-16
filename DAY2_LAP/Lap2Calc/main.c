#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    char op;
    char continueWorking;
    do{
        printf("please enter the first number:");
        _flushall();
        scanf("%i",&num1);
        printf("please enter the second number:");
        _flushall();
        scanf("%i",&num2);
        do{
            printf("please enter operation from (*,/,-,+,%):");
            _flushall();
            scanf("%c",&op);
        }while(op!='*'&&op!='/'&&op!='-'&&op!='+'&&op!='%');
        int result;
        switch(op){
            case '+':
                result=num1+num2;
            break;
            case '-':
                result=num1-num2;
            break;
            case '*':
                result=num1*num2;
            break;
            case '/':
                result=num1/num2;
            break;
            case '%':
                result=num1%num2;
            break;
            default:
                result=0;
        }
        printf("%i %c %i = %i \n",num1,op,num2,result);
        printf("continue? to exit press n \n");
        _flushall();
        scanf("%c",&continueWorking);
    }while(continueWorking!='n');
    return 0;
}
