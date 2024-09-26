// can we use string character array as pointer

#include<stdio.h>
int main(){
    char str[] = "physicswallah";
    char* ptr = str;// string ka phele character ko point kar raha
    // ek pointer bana jo p ko point kar raha ha or p ko print kar raha haa 
    // char *ptr can also be used to store adress of a string or a string
    // jo hmara str[0] ka adress hota ha vo hi pura string ka hota ha
    // *ptr fetch the value  and character
    // ptr -> stand for adress
    int i = 0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }


    return 0;
}