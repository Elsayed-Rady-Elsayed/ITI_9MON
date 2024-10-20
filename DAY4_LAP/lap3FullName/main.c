#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char firstName[11],lastName[11],fullName[22];
    printf("enter the first name:");
    gets(firstName);
    printf("enter the last name:");
    gets(lastName);
    strcat(fullName,firstName);
    strcat(fullName," ");
    strcat(fullName,lastName);
    puts(fullName);
    return 0;
}
