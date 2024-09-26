//wap to find sum of digit of given number
#include<stdio.h>
int main(){
    int n;//lisi bhi no ka digit ka sum find karna ka liya lastdigit sa sum karna padega
    printf("ENTER THE VALUE OF N");
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