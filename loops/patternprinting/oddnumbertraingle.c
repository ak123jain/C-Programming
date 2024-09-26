#include<stdio.h>
int main(){
    int n;
    printf("enter the value of row");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j=j+2){//for printing of odd number condition
        printf("%d ",j);//agar ham odd ki ya condition lagata ha to ham traingle nahi bana sakta
    }
    printf("\n");
    }
    return 0;
}