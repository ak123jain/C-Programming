//wap to print the factorial of n first number eg n= 5 so 1!=1,2!=2.1,3!=3.2.1,4!=4.3.2.1,5!=5.4.3.2.1
#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int product = 1;
    for(int i=1;i<=n;i++){
        product = product*i;
        printf("the factorial of %d is:%d\n",i,product);//%d=i,%d=product
    }
    return 0;
}