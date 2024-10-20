#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[50];
    gets(arr);
    int first=0,last=strlen(arr)-1;
    char temp;
    while(first<last){
        temp = arr[first];
        arr[first]=arr[last];
        arr[last]=temp;
        first++;
        last--;
    }
    printf("%s",arr);
    return 0;
}
