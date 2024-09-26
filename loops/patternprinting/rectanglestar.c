//Print the given pattern 
//****
//****
//****
//****
#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=4;i++){// i denote row par us pheli row ma kitna star hoge vo j denote karega
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
            }
    return 0;
}