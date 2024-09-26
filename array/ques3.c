// find the difference bt teh sum of element at even index to the sum of element at odd indices?
#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int sumeven = 0;// 1+3+5+7=16
    int sumodd = 0;// 2+4+6= 12
    int difference = 0;
    for(int i=0;i<=6;i++){
        if(i%2==0){
            sumeven = sumeven +arr[i];
        }
        else{
            sumodd+=arr[i];
        }
        difference = sumeven - sumodd;// 16-12= 4
    }
    printf("%d ",difference);
    return 0;
}
