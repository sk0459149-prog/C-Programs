#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a,b,c:");
    scanf("%f","%f","%f",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
    
        printf("The triangle is valid.\n");}
    else{

        printf("The traingle is not valid");}
   
        return 0;

}