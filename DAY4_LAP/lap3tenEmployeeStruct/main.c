#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
#define EMP_SIZE 10
struct Employee{
    int ssn;
    char name[11];
    int age;
    float salary,commission,deduction;
    bool isExist;
};
float calcNetSalary(float s,float c,float d){
    return (s+c)-d;
}
bool usedSSN(struct Employee arr[],int ssn,int idx){
    for(int i =0;i<EMP_SIZE;i++){
        if(arr[i].ssn==ssn&&idx!=i){
            return true;
        }
    }
    return false;
}
void printEmployee(struct Employee param){
    printf("the employee info:\n");
    printf("ssn\t\tname\t\tage\t\tsalary\t\tcommission\t\tdeduction\t\tNetSalary\n");
    printf("%i\t\t%s\t\t%i\t\t%f\t\t%f\t\t%f\t\t%f\n",
        param.ssn,param.name,param.age,param.salary,param.commission,param.deduction,
        calcNetSalary(param.salary,param.commission,param.deduction));
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
    struct Employee emp[EMP_SIZE]={0};;
    char ExitLoop;
    do{
        int index;
        bool checkValid = false;
        do{
            index = getIntFromUser("index of Employee");
            if(emp[index].isExist){
                printf("this empoyee already exist do you want to overwrite him ?press y for yes otherwise press x:");
                char checkdUserExist;
                _flushall();
                scanf("%c",&checkdUserExist);
                checkValid=checkdUserExist=='y'?false:true;
            }
        }while(index<0||index>9||checkValid);
        int tempssn;
        do{
            tempssn = getIntFromUser("ssn");
        }while(usedSSN(emp,tempssn,index));
        emp[index].ssn=tempssn;
        printf("enter your name:");
        _flushall();
        scanf("%s",&emp[index].name);
        emp[index].age=getIntFromUser("age");
        emp[index].salary=getFloatFromUser("salary");
        emp[index].commission=getFloatFromUser("commission");
        emp[index].deduction=getFloatFromUser("deduction");
        emp[index].isExist=true;
        printf("press n to exit,otherwise press y");
        _flushall();
        scanf("%c",&ExitLoop);
    }while(ExitLoop!='n');

     for(int i=0;i<EMP_SIZE;i++){
        if(emp[i].isExist){
            if(strcmp(emp[i].name,"")!=0&&emp[i].ssn!=0){
                printEmployee(emp[i]);
            }
        }
    }

    return 0;
}
