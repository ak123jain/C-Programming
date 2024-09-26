// wap to find an duplicate element in the array?
// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,1,5,6,7};
//     for(int i=0;i<=6;i++){
//         for(int j=i+1;j<=6;j++){
//             if(arr[i]==arr[j]){
//                 printf("%d is duplicate element ",arr[i]);
//                 break;
//             }
//         }                              
//     }
//     return 0;
//}
// find a unique no in given array whwre all the element are repeated twice and one value being unique
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,2,3,4,3,2,1};
    for(int i=0;i<=6;i++){// phele element ko baki sare element sa compare karna
      int flag = 0;
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){ // not a unique element
                flag=1;// agar aupar vali condition hit nahi kari t flag ki value 0 hi rahegi                                       
            }
        }
        if(flag!=1){// flag ka andar 0 value store ha
            printf("%d is unique element",arr[i]);
            break;
        } 
    }
     
        
    
     
    
    return 0;
}