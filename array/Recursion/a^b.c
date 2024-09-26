// make a function which calculate a^b using recursion?
// a^b = a*a*a*a*a*a....b

//2^5 = 2^5 * 2^4 * 2^3 * 2^2 * 2^1 
#include<stdio.h>
 
int power(int a,int b){
    if(b == 0) return 1;
    return a*power(a,b-1);
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