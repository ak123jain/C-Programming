//find the max value out of the array
#include<stdio.h>
int main(){
   // int max = -1;// sabse chota integer yani ham jo bhi max ki value le vo arr ka sare element sa choti ho
    // varna array ka phela element ho
    int arr[5] = {-5,5,-6,-7,-8};
    int max = arr[0];
    for(int i=1;i<=4;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
     printf("%d",max);
    return 0;
}