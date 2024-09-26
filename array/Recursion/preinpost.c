#include<stdio.h>

void preinpost(int n){
    if(n == 0) return ;
    printf("Pre %d\n",n);
    preinpost(n-1);
    printf("In %d\n",n);
    preinpost(n-1);
    printf("Post %d\n",n);
    return ;  
}
int main(){
    int n = 2;
    preinpost(n);
    return 0;
}


pip(0)
pip(0)
pip(1)
pip(0)
pip(0)
pip(1)
pip(2)
main()  sabse phele preinpost 2 ko call lag gyi phir sari call upward lagagi