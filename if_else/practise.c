#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER");
    scanf("%d",&n);
    if(n%5==0 && n%3==0 && n%15!=0)
        {
            printf("divisible by 5 or 3 but not 15");
        }
        else{
            printf("divisible by 15 but not 5 or 3");
        }
    return 0;
}