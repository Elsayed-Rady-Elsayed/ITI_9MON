#include <stdio.h>
#include <stdlib.h>
int add(int,int);
int sub(int,int);
int dive(int,int);
int mult(int,int);
int main()
{
    int num1,num2;
    char op,breakLoop;
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
            if(op=='/'&&num2==0){
               do{
                printf("enter the second number that not 0:");
                _flushall();
                res = scanf("%i%c",&num2,&extra);
                }while(num2==0);
            }
        }while(op!='*'&&op!='+'&&op!='-'&&op!='/');

        int result = 0;
        switch(op){
            case '+':
            result=add(num1,num2);
            break;
            case '-':
            result=sub(num1,num2);
            break;
            case '/':
            result=dive(num1,num2);
            break;
            case '*':
            result=mult(num1,num2);
            break;
            default:
                result=0;
                printf("your entered wrong operator");
        }

        printf("%i %c %i = %i \n",num1,op,num2,result);

        printf("to exit press n otherwise press y:");
        _flushall();
        scanf("%c",&breakLoop);
    }while(breakLoop != 'n');

    return 0;
}
int add(int n1,int n2){
    return n1+n2;
}
int sub(int n1,int n2){
    return n1-n2;
}
int dive(int n1,int n2){
    return n1/n2;
}
int mult(int n1,int n2){
    return n1/n2;
}
