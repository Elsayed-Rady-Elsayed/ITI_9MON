#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
int main()
{
    int arr[ROW][COL];
    float sum[COL];
    float avg[COL];
    for(int i =0;i<ROW;i++){
        for(int j = 0;j<COL;j++){
            printf("arr[%i][%i]:",i,j);
            scanf("%i",&arr[i][j]);
        }
    }

    for(int i =0;i<ROW;i++){
        for(int j = 0;j<COL;j++){
            printf("%i ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(int i =0;i<COL;i++){
        for(int j = 0;j<ROW;j++){
            printf("%i ",arr[j][i]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(int i =0;i<COL;i++){
        for(int j = 0;j<ROW;j++){
            sum[i] +=arr[j][i];
        }
        avg[i] = sum[i]/COL;
    }

    for(int i = 0;i<COL;i++){
        printf("avg of col %i is %f\n",i,avg[i]);
    }
     return 0;
}
