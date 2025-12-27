#include<stdio.h>
int main(){
    int roll;
    float marks1,marks2,marks3;
    float total,average;
    printf("Enter Roll number:");
    scanf("%d",&roll);
    printf("Enter marks of 3 subjects:");
    scanf("%f %f %f",&marks1,&marks2,&marks3);

    total=marks1+marks2+marks3;
    average=total/3;
    printf("\nstudent roll number:%d\n",roll);
    printf("total marks:%.2f\n",total);
    printf("average marks:%.2f",average);
    return 0;





}