#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter the three numbers :");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b>c){
        printf("a is maxmimum then b and c");
    }
    else if(b>a>c){
        printf("b is maximum then a and c");
    }
    else(c>b>a);
        printf("c is maximum then b and a");
    
    
    return 0;
}
