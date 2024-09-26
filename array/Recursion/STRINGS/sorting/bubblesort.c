
// sorting 
// bubble sort mean swapping
#include<stdio.h>
int main(){
int arr[5] = {5,4,3,2,1};
int n=5;

for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
// bubble sort
for(int i=0;i<n-1;i++){// i esliye ham kitni barr chala rahe ha n-1 esliye kyuki ham last vale element ko compare nahi karege eg 1
for(int j=0;j<=n-2;j++){// ham 2 tak hi compare karede kyuki 1 hmara j+1 ma ho gyega cover
    if(arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
    }
 }
}

printf("\n");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
}

// how to optimize teh bubble sort in the case of nearly sorted array?
// check array after certain number of passes ki vo sorted hua ki nahi and even after each pass