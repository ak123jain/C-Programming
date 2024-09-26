#include<stdio.h>
int main(){
    int cp,sp;
    printf("ENTER A cost price and seeling price");
    scanf("%d%d",&cp,&sp);
    printf("cp=%d,sp=%d",cp,sp);
    if(sp>cp){
        printf("making profit");
    }
    if(cp>sp){
        printf("making loss");
    }
    if(sp==cp){
        printf("no profit no loss");
    }
    
    return 0;
}