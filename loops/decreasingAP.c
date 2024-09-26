//display this ap 100, 97,94 upto all term which are positive
#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER");// an = a+(n-1)d = 103 -3n = 103 =3n>0 = n=34
    scanf("%d",&n);
    int a = 100;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a = a - 3;
    }
}