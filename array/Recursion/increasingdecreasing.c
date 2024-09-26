#include<stdio.h>
void increasingdecreasing(int n){
    if(n==0) return;
    printf("%d ",n);// for decreasing
    increasingdecreasing(n-1);
    printf("%d ",n);// for increasing
    return ;
}
int main(){
    int n;
    printf("enter teh no");
    scanf("%d",&n);
    increasingdecreasing(n);
    return 0;
}