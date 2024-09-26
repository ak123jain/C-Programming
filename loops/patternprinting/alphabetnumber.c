#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE VALUE OF ROW");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
         int a=1;
        for(int j=1;j<=i;j++){
            int d = a + 1;//because ascii value of A = 65
            char ch = (char)d;
            if(n%2==0){
                printf("%c ",ch);
                 a++;}
            else{
            printf("%d",j);
         }     
            }
         return 0;
    }
}   