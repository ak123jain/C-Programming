#include<stdio.h>
int main(){
    int n;
    printf("ENTER  A NUMBER :");
    scanf("%d",&n);
    if(n<0){
        n = n  * (-1);
    }
    printf("ABSOLUTE VALUE IS  %d",n);
    return 0;
}