#include<stdio.h>
int main(){
    int alex;
    int ben;
    int chris;

    printf("Enter your number:");
    scanf("%d %d %d",&alex,&ben,&chris);
    if(alex>ben>chris){
        printf("alex have the most candies while ben and chris have least candies.\n");
        if(alex%2 == 0)
           printf("alex got an even number of candies .\n");
           else
               printf("alex got an odd number of candies.\n"); 
     
    }
    else if(ben>alex>chris){
        printf("ben have the most candies while alex and chris have least candies.\n");
       if(ben%2 == 0)
           printf("ben got an even number of candies .\n");
           else
               printf("ben got an odd number of candies.\n"); 
    }
    else(chris>alex>ben);
         printf("chris have the most candies while alex and ben have least candies.\n");
        if(chris%2 == 0)
           printf("chris got an even number of candies .\n");
           else
               printf("chris got an odd number of candies.\n"); 
    return 0;
}
