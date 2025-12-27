#include<stdio.h>
int main(){
    int arr[7]= {1,2,3,4,5,78,98};
    int max =arr[0]; //Sabse chotaa number.
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}