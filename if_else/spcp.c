#include<stdio.h>
int main(){
    int cp,sp;
    printf("enter the value of sp and cp");
    scanf("%d%d",&cp,&sp);
    printf("cp=%d,sp=%d",cp,sp);
    if(cp>sp){
        printf("loss");
    }
    else if(sp>cp){// else=ya phir, if=agar
        printf("profit");
    }
    else{
        printf("no profit no loss");
    }

    return 0;
}