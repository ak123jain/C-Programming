// wap to print teh row no having the max sum in given matrix ?
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
    int maxsum = -1;// ya chij jab karte ha jab max value niklni ho
    //int sum = 0;
    
    for(int i=0;i<r;i++){
         int sum = 0;// kuyuki har row ka sum karan ha 
        for(int j=0;j<c;j++){
            sum += arr[i][j];
            if(maxsum<sum){// agar maxsum ki value kam hui sum sa to maxsum ma ham sum ki value dal dege
                maxsum = sum;
                maxsum = i;
            }
                
        }
    }
    printf("max sum row is %d",maxsum);

}