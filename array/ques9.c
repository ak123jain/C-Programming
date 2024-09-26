// if an array contain an element then check if the given array is palidrom or not
//palidrom eq = {1,2,3,2,1}
//not palidrom = {1,2,3,4,1}
#include<stdio.h>
int main(){
  int flag = 0;
  int arr[5 ]={1,2,3,7,1};
  for(int i=0,j=4;i<=j;i++,j--){// most imp and tricky code
    if(arr[i]!=arr[j]){
       flag = 1;
    }
  }
  if(flag==1){
    printf("not palidrom");
  }else{
    printf("palidrom");
  } 
   
}    