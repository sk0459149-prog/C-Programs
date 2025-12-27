//Write a program to copy one string with function using string handling function.
#include<stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter string: ");
    gets(str1);

    strcpy(str2, str1);

    printf("Copied string: %s", str2);
    return 0;
}
