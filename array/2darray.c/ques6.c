// wap to print the transpose of the matrix entered by the user?
#include<stdio.h>
int main(){
     int r;
    printf("enter row");
    scanf("%d",&r);
    int c;
    printf("enter column");
    scanf("%d",&c);
    int arr[r][c];
    // 1 2 3   row index no = 1 , column index no = 2
    // 4 5 6

    // 1 4
    // 2 5  ans we want to print row index no = 2, column index no = 1
    // 3 6
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
              scanf("%d",&arr[i][j]);   
        }
    }
    printf("\n");
    for(int i=0;i<c;i++){// interchange row or column
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}
