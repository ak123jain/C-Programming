#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of divident and divisor");
    scanf("%d%d",&a,&b);
    printf("a = %d,b = %d",a,b);
    int r = a % b;
    printf(" the remainder when %d is divided by %d :%d",a,b,r);
    return 0;
} 