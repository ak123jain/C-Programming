//WAP to the sum of given number and its reverse
#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE VALUE OF n");//n=1234
    scanf("%d",&n);
    int sum = n;
    int reverse = 0;
    int lastdigit = 0;
    while(n!=0){//n = 1234
    lastdigit = n%10;
    reverse = reverse*10;
    reverse = reverse + lastdigit;
    n = n/10;
    }
    printf("%d\n",reverse);
    sum = sum + reverse;
    printf("%d",sum);
    return 0;
}