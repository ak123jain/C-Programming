#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER THE VALUE OF a,b,c ");
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d,b=%d,c=%d ",a,b,c);
    if(a>b && a>c){
        printf("%d is greatest",a);//a is greator than b and c
    }
    if(b>a && b>c){
        printf("%d is greatest",b);//b is greator than a and c 
    }
    if(c>a && c>b){
        printf("%d is greatest",c);
    }

    return 0;
}