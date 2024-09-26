#include<stdio.h>
int main(){
    int arr[r][c];
    int r;
    printf("enter the no of rows");
    scanf("%d",&r);
    int c;
    printf("enter the no of column");
    scanf("%d",&c);
     

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}