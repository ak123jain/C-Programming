//print the nth fibonacci number eg 1,1,2,3,5,8,13,21 =sum of first two terms is equal to 3rd term
#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum = 1;
    for(int i=1;i<=n-2;i++){
    sum = a+b;
    a = b;
    b = sum; 
    }
    printf("the %d fabonacci is %d",n,sum);
    return 0;
}
