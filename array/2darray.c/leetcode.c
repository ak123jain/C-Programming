// given a matrix print all the element of matrix in spiral order
      
    // 1  2  3  4  5  6        output : 1 2 3 4 5 6 12 18 24 30 29 28 27 26 25 19 13 7 8 9 10 11 
    // 7  8  9 10  11 12                 17 23 22 21 20 14 15 16 17 
    // 13 14 15 16 17 18
    // 19 20 21 22 23 24
    // 25 26 27 28 29 30
      
      
    #include<stdio.h>
   int main(){
    int n;
    printf("enter rows");
    scanf("%d",&n);
    int m;
    printf("ENTER column");
    scanf("%d",&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");


    // 1  2  3  4  5  6        minr print karni ha (min c sa max c) tak   minr ++
    // 7  8  9 10  11 12       maxc print karni ha (min r sa max r) tak   maxc --
    // 13 14 15 16 17 18       ab max row reverse print karna ha (maxc sa min c) tak max r--
    // 19 20 21 22 23 24        ab min c reverse print karna ha (max r sa min r) tak  minc++
    // 25 26 27 28 29 30

int minr =0;
int maxr = n-1;
int minc = 0;
int maxc= m-1;
int totalelement = n*m;
int count=0;
    while(count<totalelement){
        // print the min row
        for(int j=minc;j<=maxc;j++){
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        if(count>=totalelement) break;
        // print the max column
        for(int i=minr;i<=maxr;i++){
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;
         if(count>=totalelement) break;
        // print the highest row in reverse
        for(int j=maxc;j>=minc;j--){
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--;
         if(count>=totalelement) break;
        // print the min column in reverse 
        for(int i=maxr;i>=minr;i--){
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
    }
}