//wap to print factorial of given number  5 = 5.4.3.2.1
#include<stdio.h>
int main(){
    int n; 
    printf("enter the value of n");
    scanf("%d",&n);
    int product = 1;
    for(int i=1;i<=n;i++){
        product = product*i;
    }
    printf("%d",product);

    return 0;
}