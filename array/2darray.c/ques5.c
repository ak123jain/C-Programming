// given a matrix with 0 and 1 only print the row no with max 1?
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
    int maxvalue1=-1;// ya chij jab karte ha jab max value niklni ho
    int rowmax1 = 0;
    for(int i=0;i<r;i++){
        int count1 = 0; // ham 1 ko count row wise kar rahe ha
        for(int j=0;j<c;j++){
            if(arr[i][j]==1){
                count1++;
            }
            if(maxvalue1<count1){
                maxvalue1=count1;
                rowmax1 = i;
            }

        }
    }
    printf("the row with max 1 is %d",rowmax1);
    return 0;
}