#include<stdio.h>
int main(){//take two integer input a and b :a>b and find the remainder when a isdividedby b
    int a,b;//a>b
    printf("enter the value of a and b");//a=divident b=divisor
    scanf("%d%d",&a,&b);
    printf("a = %d,b = %d",a,b);
    int q = a/b; //divident=divisor*quotient+remainder
    int r = a - b*q;
    printf("THE REMAINDER WHEN %d IS DIVIDED BY %d :%d",a,b,r);//A=%d,b=%d,R=%d
    return 0;
}
