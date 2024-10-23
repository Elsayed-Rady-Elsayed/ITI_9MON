#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int check;
    do{
        printf("enter the size:");
        _flushall();
        check = scanf("%i",&size);
    }while(check!=1);
    int *ptr = malloc(size*sizeof(int));
    for(int i = 0 ;i<size;i++){
        do{
            printf("enter the value of index %i:",i);
            _flushall();
            scanf("%i",&ptr[i]);
        }while(check!=1);
    }
    for(int i = 0 ;i<size;i++){
        printf("ptr[%i]=%i \n",i,ptr[i]);
    }

    ///////////////////////////////////////////////

    /*
    for(int i = 0 ;i<size;i++){
        do{
            printf("enter the value of index %i:",i);
            _flushall();
            scanf("%i",(ptr+i);
        }while(check!=1);
    }
    for(int i = 0 ;i<size;i++){
        printf("ptr[%i]=%i \n",i,(ptr+i));
    }
    */
    free(ptr);
    return 0;
}
