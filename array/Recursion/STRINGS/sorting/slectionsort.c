// aray ma min element dekhta ha or usko phele element sa swap kar dete ha
// in each pass we found the min element in the unsorted array
#include<stdio.h>
#include<limits.h>
int main(){
int arr[5] = {5,4,3,2,1};
int n=5;

for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
// bubble sort
for(int i=0;i<n-1;i++){// i esliye ham kitni barr chala rahe ha n-1 esliye kyuki ham last vale element ko compare nahi karege eg 1 kyuki jo last ma bachega vo aapna aap sorted element hoga
int min = INT_MAX;
int minidx = -1;
for(int j=i;j<=n-1;j++){// ham last tak min element dekhege  ham har bar agla element ma min search karege har paas ka baad 
// kyuki ek pass ka baad hmara min element phele index par store ho gya to usko chevk karna ki jarurat nahi ha
     if(min>arr[j]){
        min = arr[j];
        minidx = j;
     }
}
// swap the min element with first element of unsorted array
// swap minidx with  i
  int temp = arr[minidx];// current element sa swap kar dege
  arr[minidx] = arr[i];
  arr[i] = temp;
}
printf("\n");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
}