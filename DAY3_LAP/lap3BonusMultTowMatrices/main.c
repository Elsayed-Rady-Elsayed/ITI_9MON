#include <stdio.h>
#include <stdlib.h>
#define ROW1 3
#define COL1 2
#define ROW2 2
#define COL2 1
int main()
{
    int arr1[ROW1][COL1];
    int arr2[ROW2][COL2];
    int res[ROW1][COL2]={};
    for(int i =0;i<ROW1;i++){
        for(int j = 0;j<COL1;j++){
            printf("arr1[%i][%i]:",i,j);
            scanf("%i",&arr1[i][j]);
        }
    }
    for(int i =0;i<ROW2;i++){
        for(int j = 0;j<COL2;j++){
            printf("arr2[%i][%i]:",i,j);
            scanf("%i",&arr2[i][j]);
        }
    }

    for(int i = 0;i<ROW1;i++){
        for(int j = 0;j<COL2;j++){
            for(int z=0;z<COL1;z++){
                res[i][j] += arr1[i][z] * arr2[z][j];
            }
        }
    }
    for(int i =0;i<ROW1;i++){
        for(int j = 0;j<COL1;j++){
            printf("%i ",arr1[i][j]);
        }
        printf("\n");
    }

    for(int i =0;i<ROW2;i++){
        for(int j = 0;j<COL2;j++){
            printf("%i ",arr2[i][j]);
        }
        printf("\n");
    }



    for(int i =0;i<ROW1;i++){
        for(int j = 0;j<COL2;j++){
            printf("%i \t",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
