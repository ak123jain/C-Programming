#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    //print the ap= 1,3,5,7,9
    int a = 1;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a = a + 2;//a= a+d d=common difference
    }
    return 0;
}