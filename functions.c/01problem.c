#include<stdio.h>

     void greet(int a,int b ){
        int sum;
        sum=a+b;
        printf("%d\n",sum);

        return ;
     }


int main(){
    greet(60,9); //function call.
    greet(80,3);   
    return 0;
}