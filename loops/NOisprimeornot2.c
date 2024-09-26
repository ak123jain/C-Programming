//wap to check if a number is a composite or not
#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE VALUE OF N");//eg:n is prime no 43 to vo 2 sa lekar 42 tak divide nahi hoga yani 
    scanf("%d",&n);//pheli condition fail to a ki value 1 nahi hogi 0 hogi to print hoga n is prime
    int a = 0;
    for(int i=2;i<=n-2;i++){
        if(n%i==0){
            a = 1;
            break;
        }//eg: nis composite no 42 to vo phele condition ma hit kar jyaga yani a=1 or a ki value 0
    }//ka alawa kuck ki hui to no is composite
    if(n==1){
        printf("neither prime or composite");
    }
    if(a==0){
        printf("number is prime\n");
    }
    else{
        printf("no is composite\n");
    }
    return 0;
}