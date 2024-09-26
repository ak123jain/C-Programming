#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d *%d =%d \n",n,i,n*i);//%d=n or %d=i or %d=n*i
    }
    return 0;
}