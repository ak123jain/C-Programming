#include<stdio.h>
int main(){
    int x,y;
    printf("enter the value of (x,y) ");
    scanf("%d%d",&x,&y);
    printf("x=%d,y=%d",x,y );
    if(x==0 && y==0){
        printf("lies at origin");
    }
    else if(y==0){
        printf("lies on x axis");
    }
    else if(x==0){
        printf("lies on y axis");
    }
    else{
        printf("point does not lies on x and y");
    }
    

    return 0;
}