//simple calculator.
#include<stdio.h>
int main(){
    float num1,num2,result;
    int choice;
    printf("Simple calculations\n");
    printf("1. Addition \n");
    printf("2. substraction \n");
    printf("3. multiplication \n");
    printf("4. divison \n");
    printf("Enter your choice(1-4): ");
    scanf("%f %f, &num1, &num2");

    switch choice{
        case 1:
        result=  num1+num2;
        printf("Result=%.2f" , result);
        break;
    }

}