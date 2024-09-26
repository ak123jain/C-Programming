#include<stdio.h>
int main(){
    char str[40];
    puts("enter teh string");
    gets(str);
    puts("the size is");

// calculate teh size of string
    int size = 0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    //puts(size);
    for(int i=0,j=size-1;j>i;i++,j--){
        int temp = str[i];
        str[i] = str[j];
        str[j] =temp;
    }
    puts("the reverse string is");
    puts(str);
    return 0;
}