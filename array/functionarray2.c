#include<stdio.h>
void fun(int arr[]){
    int temp = arr[0];
    arr[0] = arr[1];                                        
    arr[1] = temp;
   return;
}                                                                         
int main(){
   int arr[2] = {5,7};
   fun(arr);
   printf("%d %d",arr[0],arr[1]);// array ma aase hi value change ho gati ha
    return 0;
}
