// WAP to print sum of series 1+2+3+4+5+6 upto n terms
#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    int sum =0;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    printf("%d",sum);

    return 0;
}