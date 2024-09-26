

        //    int arr[2][3]= 2 denote row and 3 denote column


        //         0             1             2  -> column

        //    0  arr[0][0]  arr[0][1]     arr[0][2]

        //    1  arr[1][0]  arr[1][1]     arr[1][2] 
        //    |
        //    row

//  #include<stdio.h>
//  int main(){
//     int arr[2][2]={{2,3},{5,6}};
//     // 2  3
//     // 5  6
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
//  }
//  #include<stdio.h>
//  int main(){
//     int arr[3][2]={{2,3},{5,6},{6,8}};// 3 row or har row ma  2 element
//     // 2  3
//     // 5  6
//     // 6  8
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
//  }
 #include<stdio.h>
 int main(){
    int arr[3][3]={{2,3,8},{5,6,9},{6,8,9}};
    // 2  3 8
    // 5  6 9 
    // 6  8 9
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
 }