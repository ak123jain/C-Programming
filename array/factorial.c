#include<stdio.h>
int factorial(int n){
    if(n ==1) return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("enter teh no");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d", fact);
    return 0;

}


// int factorial(int n){// n= 4
//     if(n ==1) return 1;
//     return n*factorial(n-1); 4*factorial(3);
// }
// int factorial(int n){n=3
//     if(n ==1) return 1;
//     return n*factorial(n-1);3*factorial(2);
// }
// int factorial(int n){n=2
//     if(n ==1) return 1;
//     return n*factorial(n-1);2*factorial(1);
// }
// int factorial(int n){n=1
//     if(n ==1) return 1; return ki value vaha jati ha jisna usko call ki hoti ha factorial (1) na call ki thi
//     return n*factorial(n-1);
// }
// int factorial(int n){
//     if(n ==1) return 1;
//     return n*factorial(n-1);
// }


