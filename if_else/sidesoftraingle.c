#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER THE VALUE OF a,b,c ");
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d,b=%d,c=%d ",a,b,c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("traingle is valid");
    }
    else{
        printf("invalid traingle");
    }
    return 0;
}