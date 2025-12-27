#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character :",ch);
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z'){
        printf("Character is lower case letter");
    }
    else if(ch>='A'&&ch<='Z'){
        printf("Character is upper case letter");
    }
    else{
        printf("character is not an alphabet");

    }
    return 0;


}