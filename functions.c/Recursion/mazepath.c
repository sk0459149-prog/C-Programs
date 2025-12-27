#include<stdio.h>
/*int maze(int cr , int cc  ,int er ,int ec){         //cr=current row, cc=current columns, er = ending row, ec= ending columns
    int rightWays = 0;
    int downWays = 0;
    if(cr == er && cc == ec) return 1;
    if(cr == er){ // only rightWays call
        rightWays += maze(cr,cc+1,er,ec);
    }
    if(cc == ec){  //only downwards call
        downWays +=maze(cr+1,cc,er,ec); 
      }
    if(cr < er && cc < ec){
        rightWays += maze(cr,cc+1,er,ec);
        downWays +=maze(cr+1,cc,er,ec);
    }
    int totalWays = rightWays + downWays;


}
int main(){
    int n;  //no of rows.
    printf("Enter no. of rows of the maze : ");
    scanf("%d",&n);
    int m;
    printf("Enter no. of columns of the maze : ");
    scanf("%d",&m);
    int noOfWays = maze(1,1,n,m);
    printf("%d",noOfWays);
    return 0; 
}*/
int maze(int n, int m){
    int rightways = 0;
    int downways = 0;
    if(n==1 && m==1) return 1;
    if(n==1){
        rightways +=maze(n,m-1);
    }
    if(m==1){
        downways +=maze(n-1,m);
    }
    if(n>1 && m>1){
        rightways +=maze(n,m-1);
        downways +=maze(n-1,m);
    }
    int totalways = rightways +downways;
    return totalways;    
}
int main(){
    int n;
    printf("Enter no of rows of the maze : ");
    scanf("%d",&n);
    int m;
    printf("Enter no of columns of the maze: ");
    scanf("%d",&m);
    int noOfWays = maze(n,m);
    printf("%d",noOfWays);
    return 0; 



}

