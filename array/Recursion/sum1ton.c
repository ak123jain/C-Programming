// print the sum from 1 to n
// #include<stdio.h>
// void sum(int n , int s){// void jab jab nicha calling function kohmna dabba ma na rakha ho
// if(n==0){// jaha hmara function khatam hoga vaha print sum kar dege
//     printf("%d ",s);
//     return;
// }
//  sum(n-1,s+n);
//  return;
// }
// int main(){
//     int n;
//     printf("enter teh no");
//     scanf("%d",&n);
//     sum(n,0);
//     return 0;
// }


//second method
#include<stdio.h>
int sum(int n){
    if(n == 0 || n == 1) return 1;
    return n + sum(n-1);
}
int main(){
    int n;
    printf("enter teh no");
    scanf("%d", &n);
    int fact = sum(n);
    printf("%d", fact);
    return 0;
}


 