//Ques : Two numbers are entered through the keyboard. Write a program to find the value of one
//number raised to the power of another.
#include<stdio.h>
int main(){
     int a,b;// a= base and b=power eg: 2^5=2.2.2.2.2
     printf("enetr the value of a and b");
     scanf("%d%d",&a,&b);
     int ans = 1;
     for(int i=1;i<=b;i++){//loop 5 baar chalana ha
     ans = ans * a;// har baar hmare ans ma base ki multiply 1 sa hoti rahe or loop jab tak chalta rahe jitni uski power ha
     }
     printf("%d raised to the power %d is %d",a,b,ans);
     return 0;
}