#include<stdio.h>// n ya to 3 sa divisible ho ya 5 sa
int main(){
    int n;
    printf("ENTER A NUMBER");
    scanf("%d",&n);
    if(n%5==0 ||  n%3==0){
        printf("divisible by 5 and 3");
    }
    else{
        printf("not divisible by 5 and 3");
    }
    
    return 0;
}