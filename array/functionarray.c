// #include<stdio.h>
// void fun(int a){
//    a= 7;
//    return;
// }
// int main(){
//    int a = 6;
//    printf("%d ",a);
//    fun(a);
//    printf("%d",a);// agar hma a ki value change karni ha to (pass by reference) * method ka use karege
//     return 0;
// }
#include<stdio.h>
void fun(int arr[]){
   arr[0]= 10;
   return;
}
int main(){
   int arr[5] = {5,7,8,4,3};
   printf("%d ",arr[0]);
   fun(arr);
   printf("%d",arr[0]);// array ma aase hi value change ho gati ha
    return 0;
}