#include<stdio.h>
void decreasing(int n){
    if(n == 0) return;
    printf("%d ",n);
    decreasing(n-1); 
    return ;
}
int main(){
    int n;
    printf("enter teh no");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}


// void decreasing(int n){ n= 4
//     if(n == 0) return;
//     printf("%d ",n); 4 print
//     decreasing(n-1); 3 call
//     return ;
// }
// void decreasing(int n){ n= 3
//     if(n == 0) return;
//     printf("%d ",n);  3
//     decreasing(n-1);  2 call
//     return ;
// }
// void decreasing(int n){  n = 2
//     if(n == 0) return; 
//     printf("%d ",n);  1 
//     decreasing(n-1);   0 call   
//     return ;  // 
// }
// void decreasing(int n){  n = 0
//     if(n == 0) return;  khatam tata bye bye X ab 0 ko jisna call ki thi vaha jyega
//     printf("%d ",n); XX
//     decreasing(n-1);   XX
//     return ;         XX
// }
// void decreasing(int n){
//     if(n == 0) return;
//     printf("%d ",n);
//     decreasing(n-1); esna call kiya tha to ya bhi ab khatam X
//     return ;   XX
// }
// void decreasing(int n){
//     if(n == 0) return;
//     printf("%d ",n);
//     decreasing(n-1);   XX
//     return ;           XX
// }
// void decreasing(int n){
//     if(n == 0) return;
//     printf("%d ",n);
//     decreasing(n-1);   XX
//     return ;           XX
// }
// void decreasing(int n){
//     if(n == 0) return;
//     printf("%d ",n);
//     decreasing(n-1);    XX
//     return ;            XX
// }