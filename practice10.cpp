//using scanf to take input from user
#include<stdio.h>
int main(){
    float principal,rate,time,si; // 4 dabbe create ho jate hai
    printf("Enter Principal : ");
    scanf("%f" , &principal);
    printf("Enter rate: ");
    scanf("%f",&rate);
    printf("Enter time: ");
    scanf("%f", &time);
    si = (principal*rate*time)/100;
    printf("Your simple interest is : %.2f",si);
    return 0;

}
