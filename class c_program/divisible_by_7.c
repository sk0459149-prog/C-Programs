#include<stdio.h>
int main(){
    int num;
    printf("Enter the product quantity: ");
    scanf("%d",&num);
    if(num%7 ==0 &&num%11!=0 &&num % 5==0){
        printf("The number is divisible by 7,not by 11, and is a multiple of 5. \n");}
        else{
            printf("The number does not satisfy the condition.\n");
        }

return 0;
    }
