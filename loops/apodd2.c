#include<stdio.h>
int main(){//display this ap=4,7,10,13,16 upto n
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=4;i<=3*n+1;i=i+3){//an=a+(n-1)d a=4,d=3
        printf("%d ",i);
    }
    return 0;

}