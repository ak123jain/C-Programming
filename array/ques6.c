//find the largest element in the array
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={12,3,3,4,5,6,7};
     int max = INT_MIN;//sabse choti value
     int smax = INT_MIN;
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }// after teh loop we get ma value max = 12
    for(int i=0;i<=6;i++){// to get teh second largest no hmari max ki value arr[i] ka equal nahi hogi
        if(  arr[i]!=max && smax<arr[i]){// same kam bas max ki value arr[i] ka equal na ho 
            smax = arr[i];// ek max ka elent k chod kar baki sab sa compare ho jyaga
        }
    }
    printf("%d ",smax);//
    return 0;
}