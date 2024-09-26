// given an array of integer change the value of all odd index element to its second multiple and  increment all
//even endex value by 10
#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    for(int i=0;i<=6;i++){
        if(i%2!=0){
            arr[i] = arr[i]*2;
        }
        else{
            arr[i] = arr[i] +10;
        }
        printf("%d ",arr[i]);
    }
    //printf("%d",arr[i]);
    return 0;
}