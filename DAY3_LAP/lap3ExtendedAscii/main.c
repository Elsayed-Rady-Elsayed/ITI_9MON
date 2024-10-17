#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("press on any key to view its ascii\n");
    ch = getch();
    if(ch==-32){
        ch = getch();
        printf("the extended ascii of character is %i",ch);
    }else{
        printf("the ascii of character is %i",ch);
    }
    return 0;
}
