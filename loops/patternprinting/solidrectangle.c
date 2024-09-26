#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=3;i++){//outer loop signify no of lines
        for(int i=1;i<=n;i++){//inner loop signify no of star in each line
            printf("*");
        }
        printf("\n");
    }
    return 0;
}