#include<stdio.h>

int main() {
    int marks[10];

    printf("Enter marks of the students:\n");

    for(int i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
        }
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d ",i);
        }
    }

    return 0;
}
