#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER THe VALUE OF a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d=a,%d=b,%d=c ",a,b,c);
    if(a>b){ // ya code jab likht ha jab dono condition ma hona vala printf same ho
        if(a>c){
            printf("%d is greatest",a);
        }
        else{//(c>a)
            printf("%d is greatest",c);
        }
    }
    else{//(b>a)
        if(b>c){
            printf("%d is greatest",b);
        }
        else{//(c>b)
            printf("%d is greatest",c);
        }
    } 
    return 0;
}