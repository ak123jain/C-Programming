//print the given series = jitna row utna columns or jitni lines utna star
//1*
//2**
//3***
//4****
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of row");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){//no of rows
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}