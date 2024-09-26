// count the no of element in given array greator than the given no X ?
#include<stdio.h>
int main(){
    int x=4;
    int arr[7] = {1,2,3,4,5,6,7};
    int count = 0;
    for(int i=0;i<=6;i++){
        if(arr[i]>x){
            count++;
            printf("%d ",arr[i]);
        }  
    }
    printf("\n ans: %d",count);
    return 0;
}