#include<stdio.h>
int main(){
    int x=1;
    while(x==1){//condition
       printf("\n%d",x);  //phele x ki value print hogi jo ki 0 ha phir vo condition par jyagi condition
        x = x-1;//not satisfy to loop khata
    }
    return 0;
}