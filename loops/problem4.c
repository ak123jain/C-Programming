//WAP to print reverse of given number
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n");//n=1234
    scanf("%d",&n);
    int reverse = 0;
    int lastdigit = 0;
    while(n!=0){
    lastdigit = n%10;
    reverse = reverse + lastdigit;
    reverse=reverse*10;
    n = n/10; 
    } 
    reverse=reverse/10;
    printf("%d",reverse);
    return 0;
}