#include<stdio.h>
int main(){
    int i;
    while(i=10){//phele i ki 10 aayi dabba ma phir vo  print ho gyii  phir vo 1 value badd gyii 11 ho gyii 
        printf("%d",i);//i ki value 11 sa phir vo 10 ho gyii because(i=10)to infinite loop banaga
        i = i+1;
 }   
    return 0;// warning :infinite loop
}// agr i==10 hota to loop vahi band ho gata