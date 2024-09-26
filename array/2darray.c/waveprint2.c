//   1 2 3                                 7 4 1
//   4 5 6   after second wave print       2 5 8
//   7 8 9                                 9 6 3


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
    // wave print 2
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                printf("%d ",a[i][j]);
            }
        }
        else{
          for(int i=0;i<m;i++){
            printf("%d ",a[i][j]);
          }
        }
        printf("\n");
    }
    return 0;
}