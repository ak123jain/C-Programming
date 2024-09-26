#include<stdio.h>
int main(){
    int n;
    printf("ENTER TEH VALUE OF ROW");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            int d = a + 64;//because ascii value of A = 65
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;

}