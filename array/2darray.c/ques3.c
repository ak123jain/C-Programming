// given a matrix "a" of dimension n*m and 2 coordinates (l1,r1) and (l2,r2) return the sum of rectangle
// from (l1,r1) to (l2,r2) ?
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
    int l1 ;
    int r1 ;
    int l2 ;
    int r2 ;
    printf("enere teh values of l1 ,r1 ,l2 ,r2");
    scanf("%d%d%d%d",&l1,&r1,&l2,&r2);
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum += arr[i][j];
        }
    }
    printf("the sum of rectangle of coordinates is %d ",sum);

}

// 1 2 3   we want to sum the rectangle matrix of coordinates arr[0][1] + arr[1][2]
// 1 2 3                                                          |  |        |  |
// 1 2 3                                                        row  column  rw  clm 