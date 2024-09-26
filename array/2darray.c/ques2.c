//sum of matrix
#include<stdio.h>
int main(){
    int r;
    printf("enter row");
    scanf("%d",&r);
    int c;
    printf("enter column");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
              scanf("%d",&arr[i][j]);   
        }
    }
    int sum = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
               sum+=arr[i][j];
        }
    }
    printf("the sum of matrix is %d",sum);


    return 0;
}
1 2 3   arr[i][j] arr[i][j] arr[i][j]
1 2 3   arr[i][j] arr[i][j] arr[i][j] 
1 2 3   arr[i][j] arr[i][j] arr[i][j]