//// #include<stdio.h>
// int main(){
//     int marks[10] = {23,4,5,67,8,9,65,44,33,22};
//     for(int i=0;i<=9;i++){
//         if(marks[i]<10){
//             printf("%d ",marks[i]);
//         }
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    int arr[5] = {1,2,3,4,5};
    
    for(int i=0 ,j=n-1 ;j>i ;i++,j--){
        int temp = arr[i];
        arr[i] =arr[j];
        arr[j] = temp;
        
        printf("%d ",arr[j]);
    }
     
    return 0;
}