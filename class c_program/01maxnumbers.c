#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    if(a>b){
        printf("a is greater then b");        
    }
    else if(a<b){
        printf("b is greater then a");
    }
    return 0;
     
    
    
    
}