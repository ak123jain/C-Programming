#include<stdio.h>
int main(){
    int n,m;
    printf("enter the no of rows and columns : ");
    scanf("%d%d",&n,&m);//n represent no of lines or row or m = no of columns or stars in each line
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}