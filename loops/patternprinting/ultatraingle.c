#include<stdio.h>
int main(){
    int n;
    printf("enter the value of row");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){//no of rows
        for(int j=1;j<=(n+1)-i;j++){// pheli row ma hmare star hoge jitni total no of row ha or phir har row ma star ko (-) karna ha
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}