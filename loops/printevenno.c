//print even no up to 100
#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){//phele i ki value condition par jyagi agar satisfy  ha to print ho gyagi phir usma +1 add ho gyaga
        if(i%2==0){
            printf("%d ",i);
        }
    }
         
    return 0;
}