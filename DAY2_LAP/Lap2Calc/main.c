#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    char op,EndLoop,extra;
    do{
        char extra;
        int res;
        do{
            printf("enter the first number:");
            _flushall();
            res = scanf("%i%c",&num1,&extra);
        }while((int)extra!=10);
        do{
            printf("enter the second number:");
            _flushall();
            res = scanf("%i%c",&num2,&extra);
        }while((int)extra!=10);
        do{
             printf("enter the operation:");
            _flushall();
            scanf("%c",&op);
        }while(op!='%'&& op!='+'&&op!='-'&&op!='/'&&op!='*');
        int result;
        switch(op){
        case '*':
            result=num1*num2;
            break;
        case '-':
            result=num1-num2;
            break;
        case '/':
            result=num1/num2;
            break;
        case '+':
            result=num1+num2;
            break;
        case '%':
            result=num1%num2;
            break;
        default:
            result=0;
        }
        printf("%i %c %i = %i \n",num1,op,num2,result);
        printf("press n to end");
        _flushall();
        scanf("%c",&EndLoop);
    }while(EndLoop!='n');

    return 0;
}
