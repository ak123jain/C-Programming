#include<stdio.h>
int factorial(int x){
    int nfact = 1;
    for(int i=2;i<=x;i++){
        nfact = nfact*i;
    }
    return nfact;
}
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int r;
    printf("enter r");
    scanf("%d",&r);
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    int ncr = nfact/(rfact*nrfact);
    printf("%d",ncr);
    return 0;
}