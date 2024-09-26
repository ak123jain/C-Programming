// rotate a matrix 90 degree clockwise?
#include<stdio.h>
int main(){
    int r;
    printf("enter teh no of rows");
    scanf("%d",&r);
    int c;
    printf("entr column");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // transpose
    for(int i=0;i<r;i++){
        for(int j=i;j<c;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0;i<r;i++){ //r=3 c = 3
    int k= c-1;// k=2
    for(int j=0;j<k;j++){// 1<=1 2<=0  
        // swap arr[i][j] with arr[i][k]
        int temp = arr[i][j];
        arr[i][j] = arr[i][k];
        arr[i][k] = temp;
        k--;
    }
   }
   printf("\n");
 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);
     }
     printf("\n");
    }
}

//rotate loop
// for(int i=0;i<r;i++){                     1 2 3    1 4 6
//     int k= c-1;                        A  4 5 6    2 5 7 A^t   to rotate transpose matrix swapping 1
//     for(int j=0;j<=k;j++){                6 7 8    3 6 8  column and last column
//         // swap arr[i][j] with arr[i][k]
//         int temp = arr[i][j];           j = 0 sa k= c-1 = 3 - 1 = 2 
//         arr[i][j] = arr[i][k];   or transpose karna ka baad C1 column or C3 ko swap kar dege
//         arr[i][k] = temp;
//     }
//    }