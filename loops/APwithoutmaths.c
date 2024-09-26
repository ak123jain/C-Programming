#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    //print this ap =4,7,10,13,16 upto n without formula
    int a =4;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a = a + 3;
    }
    return 0;
}