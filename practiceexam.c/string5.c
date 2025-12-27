#include <stdio.h>

int main() {
    char first[50], last[50], full[100];
    char *p = full, *f = first, *l = last;

    printf("Enter first name: ");
    gets(first);
    printf("Enter last name: ");
    gets(last);

    while (*f != '\0')
        *p++ = *f++;

    *p++ = ' ';

    while (*l != '\0')
        *p++ = *l++;

    *p = '\0';

    printf("Full Name: %s", full);
    return 0;
}
