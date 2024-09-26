// multiplication of two matrix


//         rules for matrix multiplication 

//         a[m][n] * b[p][q] = res[m][q]

//         1. n==p
//         2. resultant order is [m][q]
#include<stdio.h>
int main(){
    // 1 2
    // 3 4
    // 5 6
    int a[3][2] = {{1,2},{3,4},{5,6}};
    // 1 2 3 4
    // 5 6 7 8
    int b[2][4] = {{1,2,3,4},{5,6,7,8}};
    int res[3][4];
    int cr = 2;// column or row dono 2 ha n or p
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            // i row of a[][] and j column of b[][]
             res[i][j]=0;
            for(int k=0;k<cr;k++){// k represent column of a and row of b matrix
            res[i][j] += a[i][k]*b[k][j];

            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){

            printf("%d ",res[i][j]);
        }  
        printf("\n");
    }

    return 0;
}