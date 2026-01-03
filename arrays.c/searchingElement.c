#include<stdio.h>
int main(){
int arr[7] = {1,2,5,4,5,5,7};
int x = 5;
for(int i=0;i<=6;i++){
    if(arr[i]==x){
    printf("%d is present in the array and its index is %d\n",x,i);
    
}
   }
   return 0;
}
