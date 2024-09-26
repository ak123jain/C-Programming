#include<stdio.h>
int main(){
    int n;
    printf("enter the percentage");
    scanf("%d",&n);
    //more than 80% = A
    //more than 60% = B
    //more than 40%= C
    //less than 40% = D
    if(n>80){
        printf("A grade");
    }
    else if(n>60){// else= ya phir ,if = agar
     printf("B grade");
    }  
    else if(n>40){
        printf("C grade");
    }
    else{
        printf("D grade");
    }
    return 0;
}