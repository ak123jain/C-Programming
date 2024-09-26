//WAP to count digit of given number
#include<stdio.h>// let n=19325 n/10=1932 aayaga to hmara count 0 sa 1 ho gaya gitni baar divide karaga 
int main(){//utni baar count ma 1 add ho gyaga
    int n;
    printf("ENTER THE VALUE OF N");
    scanf("%d",&n);
    int count = 0;
    while(n!=0){//jab tak n 0 ka equal nahi hota tab tak usko 10 sa divide karege
      n = n/10;
      count++;
    }
    printf("%d",count);
    return 0;
}