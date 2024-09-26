//#include<stdio.h>
// string is collection of character  integer is consuming more memory as compared to  1byte = 8 bits               
//   integer 4 byte character 1 byte   ASCII vaue of A = 65  .  a =  97  char '0' = 48   char '9' = 57
// int main(){
//     char arr[]= {'a','b','c','d'};
//     printf("%c ",arr[0]);
//     printf("%c ",arr[1]);
//     printf("%c ",arr[2]);
//     printf("%c ",arr[3]);
//     return 0;
// }

// #include<stdio.h>
// int main(){// finding ASCII value
//     char ch = '9';
//     //int x = (int)ch;
//     printf("%d",ch);
//     return 0;
// }

// #include<stdio.h>
// int main(){// finding ASCII value
//     char ch = '\0';// it is a  null character
//     printf("%d",ch);
//     return 0;
// }

// #include<stdio.h>
// int main(){

//     char arr[] = "ONE DAY I CRACK MICROSOFT \0";
//     int i=0;
//     while( arr[i]!='\0'){// \0 is like a character
//         printf("%c ",arr[i]);
//         i++;
//     }
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    //scanf("%s",str);
    gets(str);// inplace of scanf          
    //printf("%s",str);
    puts(str);// inplace of printf
    return 0;
}