#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE VALUE ");
    scanf("%d",&n);
    //display this gp = 100,50,25
    float a= 100;
    for(int i=1;i<=n;i++){
        printf("%f ",a);
        a = a/2;
    }
    return 0;
}