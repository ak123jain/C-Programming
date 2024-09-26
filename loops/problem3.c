//WAP to print sum of all even digit of given number
#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int sum = 0;
    int lastdigit = 0;
    while(n!=0){
        lastdigit = n%10;
        if(lastdigit%2==0)
        sum = sum + lastdigit;
        n=n/10;
    }
    printf("%d",sum);
    return 0;

}

 