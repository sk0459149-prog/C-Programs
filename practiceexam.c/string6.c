//To compare two strings,by using with string handling function.
#include<stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    if (strcmp(s1, s2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
