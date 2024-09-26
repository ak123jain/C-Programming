            


            // 1 2 3                     1 2 3  or  1 2 3 6 5 4 7 8 9 6 5 3
            // 4 5 6  after wave print   6 5 4
            // 7 8 9                     7 8 9
            // 3 5 6                     6 5 3
         
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
    // wave print
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                printf("%d ",a[i][j]);
            }
        }
        else{
          for(int j=n-1;j>=0;j--){
            printf("%d ",a[i][j]);
          }
        }
        printf("\n");
    }
    return 0;
}