#include<stdio.h>
int main(){
    int n;
    printf("ENTER TEH NO OF ROWS");
    scanf("%d",&n);
    int nsp = n - 1;
    for(int i=1;i<=n;i++){
        for(int q=1;q<=nsp;q++){
            printf(" ");
        }
        nsp--;
        int a = 1;
        for(int j=1;j<=i;j++){
            int d = a + 64;
            char ch = (char)d;
            printf("%c",ch);
            a++;
        }
        int b = i-1;
        for(int k=1;k<=i-1;k++){
            int d = b + 64;
            char ch = (char)d;
            printf("%c",ch);
            b--;
        }
        printf("\n");
    }
    return 0;
    }