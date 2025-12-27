#include<stdio.h>
int fibo(int n){
    if(n==1 || n==0) return 1;
    int recAns = n*factorial(n-1);
    return recAns;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    //int x =fibbo(n);
    int fact =factorial(n);
    printf("%d",fibo(n));
    return 0;
}