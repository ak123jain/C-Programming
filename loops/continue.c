//wap to print odd number from 1 to 100
#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){//if(i%2==0)even condition
     if(i%2==0){// i ko hmana 1 to 100 tak chala diya jab i=2 hoga to condition hit hogi continue vali
        continue;//continue=skip karo us round ko eg:i=2 to condition hit hui to vo round skip
     }
      printf("%d ",i);
    }
    return 0;
}