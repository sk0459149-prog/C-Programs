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

    switch (choice){
        case 1:
        result=  num1+num2;
        printf("Result=%.2f" , result);
        break;
    }
    switch (choice){    
        case 2:
        result=num1-num2;
        printf("Result =%.2f",num1-num2);
        break;
    }
    switch (choice){
        case 3:
        result= num1*num2;
        printf("Result =%.2f", num1*num2);
        break;
    }
    switch (choice){
        case 4:
        result=num1/num2;
        printf("Result=%.2f" , num1/num2);
        break;
    }
    switch (choice){
    case 5:
    if (num2 != 0)
    {
        printf("Result =%.2f",num1/num2)
        /* code */
    }
    
    
        break;
    
    }
        




#include <stdio.h>
int main(){
    float a, b;
    int choice;
    printf("1.Add 2.Sub 3.Mul 4.Div\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
        case 1: printf("Result = %.2f", a + b); break;
        case 2: printf("Result = %.2f", a - b); break;
        case 3: printf("Result = %.2f", a * b); break;
        case 4: 
            if (b != 0) printf("Result = %.2f", a / b);
            else printf("Division by zero not allowed");
            break;
        default: printf("Invalid choice");
    }
    return 0;
}