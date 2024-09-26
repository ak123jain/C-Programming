// WAP to print sum of series 1-2+3-4+5-6 upto n terms
#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;i++){
        if(i%2==0)sum= sum -i;
        if(i%2!=0)sum = sum+i;
    }
    printf("%d",sum);
    return 0;
}
 