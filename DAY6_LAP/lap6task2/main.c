#include <stdio.h>
#include <stdlib.h>

int main()
{
    int col,row;
    int check;

    do{
        printf("enter the row:");
        _flushall();
        check = scanf("%i",&row);
    }while(check!=1);

    do{
        printf("enter the col:");
        _flushall();
        check = scanf("%i",&col);
    }while(check!=1);

    int **arr = malloc(row*sizeof(int*));

    for(int i = 0;i<row;i++){
        arr[i]=malloc(col*sizeof(int));
    }

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("arr[%i][%i]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("arr[%i][%i] = %i \n",i,j,arr[i][j]);
        }
    }
    for(int i = 0;i<row;i++){
            free(arr);
    }
    free(arr);
    return 0;
}
