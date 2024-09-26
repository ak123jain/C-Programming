//wap to find sum of digit of given number
#include<stdio.h>
int main(){
    int n;
    printf("enter the number");// n=1234 ,n%10=4 ,n/10=123
    scanf("%d",&n);
    int sum = 0;
     int lastdigit = 0;
    while(n!=0){
        lastdigit = n%10;
        sum = sum + lastdigit;
        n = n/10;
    } 
    printf("%d",sum);
    return 0;  
}