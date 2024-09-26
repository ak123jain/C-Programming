// make a function which calculate a^b using recursion?
// a^b = a*a*a*a*a*a....b 
#include<stdio.h>
int power(int a,int b){
    if(b == 0) return 1;
    int x = power(a,b/2);// a ki power b/2 ha
    // 2^7 = 2^7/2 * 2^7/2 * 2 = 2^3 * 2^3 * 2
    if(b%2==0){
        return x*x;
    }
    else{
        return x*x*a;
    }
}
int main(){
    int a;
    printf("enter teh base");
    scanf("%d", &a);
    int b;
    printf("enter teh power");
    scanf("%d", &b);

    int p = power(a,b);
    printf("%d is raised to the power %d is %d", a ,b ,p);
    return 0;
}