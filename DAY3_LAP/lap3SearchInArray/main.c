#include <stdio.h>
#include <stdlib.h>
#define arrSize 15
int searchInArray(int arr[],int num){
    for(int i =0;i<arrSize;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[arrSize];
    for(int i =0;i<arrSize;i++){
        printf("enter the number %i:",i);
        scanf("%i",&arr[i]);
    }
    char wantToContinue;
    do{
        int numberToSearchFor;
        printf("enter the number to search for:");
        _flushall();
        scanf("%i",&numberToSearchFor);
        int FindItem = searchInArray(arr,numberToSearchFor);
        if(FindItem==-1){
            printf("number not found \n");
        }else{
            printf("the number found in index %i \n",FindItem);
        }
        printf("enter n to exit otherwise press y \n");
        _flushall();
        scanf("%c",&wantToContinue);
    }while(wantToContinue!='n');
    return 0;
}
