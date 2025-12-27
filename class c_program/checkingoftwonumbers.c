
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d" , &num);
    if(num<=10){
        printf("yes %d is less than 10",num);
    }
    else{
        printf("%d is greater than 10", num);
    }
    return 0;
}