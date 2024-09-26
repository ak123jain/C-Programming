#include<stdio.h>
int main(){
    int n;
    printf("ENTER the no of lines");
    scanf("%d",&n);
    int min = 0;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a = i;// ek hmana aalag sa variable bana liya 
            if(i>n) a = 2*n-i;
            int b = j;
            if(j>n) b = 2*n-j;
            if(a>b) min = b;//a=i and b=j
            else min = a;
            printf("%d",min);
        }
        printf("\n");
    } 
    return 0;
    }