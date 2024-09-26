//write a program to reverse the array without using an extra array
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    for(int i=0, j=6;i<j;i++,j--){// i and j are index no
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}// {1,2,3,4,5,6,7}
//   i           j   hmna i or j ko aapas ma swap kar diya
//   0           6  index no 
// hmna esme arr[i] or arr[j] ki value swap kar di