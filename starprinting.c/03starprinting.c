#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(j=n;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
return 0;
}


/*start
declare variable n,i,j
read the variable 
take the input from the user
n=5

*/

