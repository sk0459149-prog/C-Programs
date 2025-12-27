//to find factorials of numbers using function.

#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact * i;

    }
    return fact;

}

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int result=factorial(num);
    printf("The Facatorial of %d is %d\n",num,result);

    return 0;
}


