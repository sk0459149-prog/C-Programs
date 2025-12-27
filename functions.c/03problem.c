#include <stdio.h>

int add(int a, int b) 
{ return a + b; }
int subtract(int a, int b)
{ return a - b; }
int multiply(int a, int b) 
{ return a * b; } 
double divide(int a, int b) {
    if (b == 0) {
        printf("Error: division by zero\n");
        return 0.0;
    }
    return (double)a / (double)b;
}

int main() {
    int x, y;
    printf("Enter two numbers a and b:");
    if (scanf("%d %d", &x, &y) != 2) 
    return 1;

    printf("Add: %d\n", add(x,y));
    printf("Subtract: %d\n", subtract(x,y));
    printf("Multiply: %d\n", multiply(x,y));
    printf("Divide: %.6f\n", divide(x,y));

    return 0;
}
