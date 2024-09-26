//5,4,3,2,1 ->4 5 sa aapna aap ko compare karega
//4,5,3,2,1 -> 3  5 sa aapna aap ko compare karega
//3,4,5,2,1 -> 3 do baar swap hoga
//2,3,4,5,1
//1,2,3,4,5
// swappng from end till the element find its position
// swap only happen when element is smaller than the left element 
// hma i=1 sa loop shuru krna ha kyuki 5 aapni sahi position par ha ek array ka hisab sa
// n-1 is the last element element 
// while loop ham jab lagata ha jab hma na pata ho kitni baar swapping hogi
#include<stdio.h>
int main(){
    int arr[5] = {5,4,3,2,1};
    int n=5;
    
    for(int i=1;i<=n-1;i++){
        int j = i;
        while ( j>=0 && arr[j]<arr[j-1]){
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
        }       
    }
    printf("\n");
    for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
    return 0;
}
