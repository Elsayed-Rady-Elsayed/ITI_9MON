#include <stdio.h>
#include <stdlib.h>
#define arrSize 15
void sortTheArray(int arr[]){
    for(int i =0;i<arrSize;i++){
        for(int j = i+1;j<arrSize;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int arr[arrSize];
    for(int i =0;i<arrSize;i++){
        printf("enter the number %i:",i);
        scanf("%i",&arr[i]);
    }

    printf("unsorted array :");
    for(int i =0;i<arrSize;i++){
        printf("%i ",arr[i]);
    }

    sortTheArray(arr);

    printf("\nsorted array :");
    for(int i =0;i<arrSize;i++){
        printf("%i ",arr[i]);
    }
    return 0;
}
