// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     //index 1 sa 4 tak reverse karna ha
//     for(int i=1, j=4;i<j;i++,j--){// i and j are index no
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//     for(int i=0;i<=6;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
#include<stdio.h>// same code but this for recursion
int main(){
void reverse(int arr[],int a,int b){

    for(int  i=a, j=b;i<j;i++,j--){// i and j are index no
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
    int arr[7]={1,2,3,4,5,6,7};
    //index 1 sa 4 tak reverse karna ha
     
    reverse(arr,1,4);
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    
}