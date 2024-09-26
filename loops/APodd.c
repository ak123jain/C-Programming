#include<stdio.h>
int main(){//arthematic progression =a ,a+d,a+2d,a+3d,.....a+(n-1)d
    int n;//  question 1) display this ap=1,3,5,7,9.... up n terms
    printf("ENTER THE VALUE OF n : ");
    scanf("%d",&n);
    for (int i=1;i<=2*n-1;i=i+2){//i=initialisaton ,i= condition, i= increment
        printf("%d ",i);

    }

    return 0;
}