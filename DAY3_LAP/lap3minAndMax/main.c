#include <stdio.h>
#include <stdlib.h>
#define arrSize 15
int FindMaxValue(int arr[]){
    int maxValue=0;
    for(int i =0;i<arrSize;i++){
        if(maxValue<arr[i]){
            maxValue=arr[i];
        }
    }
    return maxValue;
}
int FindMinValue(int arr[]){
    int minvalue=arr[0];
    for(int i =0;i<arrSize;i++){
        if(minvalue>arr[i]){
            minvalue=arr[i];
        }
    }
    return minvalue;
}
int main()
{
    int arr[arrSize];
    for(int i =0;i<arrSize;i++){
        printf("enter the number %i:",i);
        scanf("%i",&arr[i]);
    }
    printf("the max number is %i \n",FindMaxValue(arr));
    printf("the min number is %i \n",FindMinValue(arr));
    return 0;
}
