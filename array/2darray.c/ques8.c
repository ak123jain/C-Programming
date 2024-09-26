// convert a square matrix into its transpose without using extra variable ?


    //            1 2 3    1 4 7
    //    A =     4 5 6    2 5 8 = A^t   diagonal element are same but opposite element are interchange 
    //            7 8 9    3 6 9          and swapp eg arr[i][j] swap to arr[j][i]

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
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=i;j<c;j++){
       // swap arr[i][j]to arr[j][i]
       int temp = arr[i][j];
       arr[i][j] = arr[j][i];
       arr[j][i] = temp;
     }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);
     }
     printf("\n");
    }
}



// for(int i=0;i<r;i++){                     EXPLAIN TEH CODE: 1 2 3 
//         for(int j=i;j<c;j++){                               5 6 7 
//        // swap arr[i][j]to arr[j][i]                        9 8 8  
//        int temp = arr[i][j];
//        arr[i][j] = arr[j][i];                phele (0,0) ki value swap hogi phir (0,1)phir(0,2)(0,3)
//        arr[j][i] = temp;                par (0,1) ka sath ma (1,0) ki value swap hui thi or 
//      }                                (0,2) ka sath ma (3,0) ki value swap
//     }                              par jab ham loop ma next row par aaye to starting sa value 
//                                     swap na ho esliye hmna j ko i sa start kara