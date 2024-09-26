// given an array and a number X . find out if X lies in the array or not if yes then print the index?
// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int X =4;
//     for(int i=0;i<=6;i++){
//         if(arr[i]==X){
//             printf("%d is present in the array and its index is %d",X,i);
//             break;// taki agar same elemnt hoo to to repeat ma print na ho
//         }
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int X = 4;
    int flag = 0;
    int idx= -1;
    for(int i=0;i<=6;i++){
        if(arr[i]==X){
            flag=1;
            idx = i;
        }
    }
    if(flag!=1){
        printf("%d is not present in the array",X);

    }else{
        printf("%d is present in the array and its index is %d",X,idx);
    }
    return 0;
}