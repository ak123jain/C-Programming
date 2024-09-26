#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int a;
    printf("enter 1 no");
    scanf("%d",&a);
    int b;
    printf("enter 2 no");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("%d",sum);
    return 0;
}