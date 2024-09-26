#include<stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3,m,n;//m=slope=y2-y1/x2-x1 or n=slope=y3-y2/x3-x2
    printf("enter the value of (x1,y1),(x2,y2),(x3,y3)");
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("x1=%f,y1=%f,x2=%f,y2=%f,x3=%f,y3=%f",x1,y1,x2,y2,x3,y3);
    m = (y2-y1)/(x2-x1);
    n = (y3-y2)/(x3-x2);
    if(m==n){
        printf("all three point lies on a striaght line");
    }
    else{
        printf("not lies on a striaght line");
    }


    return 0;
}