#include<stdio.h>
int main(){
    int l,b;
    printf("VALUE OF LENGTH AND BREADTH");
    scanf("%d%d",&l,&b);
    printf("l=%d,b=%d",l,b);
    int a=l*b;
    int p=2*(l+b);
    if(p>a){
        printf("perimeter is greator than area");
    }
    else{
        printf("area is greator than perimeter");
    }
    return 0;

}