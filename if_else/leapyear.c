#include<stdio.h>
int main(){
    int n;//leap year==2000,2004,2008,2012,2016
    printf("ENTER A YEAR");
    scanf("%d",&n);
    if(n%4==0){
    printf("year is leap year");
    }
    else{
        printf("year is not leap year");
    }
    return 0;
}