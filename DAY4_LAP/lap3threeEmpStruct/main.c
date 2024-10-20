#include <stdio.h>
#include <stdlib.h>
#define EMP_SIZE 3
struct Employee{
    int ssn;
    char name[11];
    int age;
    float salary,commission,deduction;
};
float calcNetSalary(float s,float c,float d){
    return (s+c)-d;
}
void printEmployee(struct Employee param){
    printf("the employee info:\n");
    printf("ssn\t\tname\t\tage\t\tsalary\t\tcommission\t\tdeduction\t\tNetSalary\n");
    printf("%i\t\t%s\t\t%i\t\t%f\t\t%f\t\t%f\t\t%f\n",param.ssn,param.name,param.age,param.salary,param.commission,param.deduction,calcNetSalary(param.salary,param.commission,param.deduction));
}
int getIntFromUser(char s[]){
    int returnValue,checkValidyt;
    do{
        printf("enter your %s:",s);
        _flushall();
        checkValidyt = scanf("%i",&returnValue);
    }while(checkValidyt==0);
    return returnValue;
}
float getFloatFromUser(char s[]){
    int checkValidyt;
    float returnValue;
    do{
        printf("enter your %s:",s);
        _flushall();
        checkValidyt = scanf("%f",&returnValue);
    }while(checkValidyt==0);
    return returnValue;
}

int main()
{
    struct Employee emp[EMP_SIZE];
    for(int i=0;i<EMP_SIZE;i++){
        emp[i].ssn=getIntFromUser("ssn");
        printf("enter your name:");
        scanf("%s",&emp[i].name);
        emp[i].age=getIntFromUser("age");
        emp[i].salary=getFloatFromUser("salary");
        emp[i].commission=getFloatFromUser("commission");
        emp[i].deduction=getFloatFromUser("deduction");
    }
     for(int i=0;i<EMP_SIZE;i++){
        printEmployee(emp[i]);
    }

    return 0;
}
