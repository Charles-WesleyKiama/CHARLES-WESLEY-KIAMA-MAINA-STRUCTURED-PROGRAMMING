#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {

    char name[20];
    int stringLength;

    printf("Please enter your first name: \n");
    scanf("%s", name);

    stringLength = strlen(name);

    printf("Your first name is %s. It is %i letters long. \n ", name, stringLength);

    return 0;
}