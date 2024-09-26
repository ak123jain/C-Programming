#include<stdio.h>
int main(){
    int x,y;
    printf("enter the coordinates : ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("lies at origin");
    }
    else if(x==0){
        printf("lies on y axis");
    }
    else if(y==0){
        printf("lies on x axis");
    }
    else{
        printf("point does not lies on x and y");
    }
    

    return 0;
}