#include<stdio.h>
int main(){
    int n;
    printf("ENTER TEH NO OF ROWS");
    scanf("%d",&n);
    int nst = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n+1)-i;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        nst = nst + 2;
        printf("\n");
    }
    return 0;
}

 