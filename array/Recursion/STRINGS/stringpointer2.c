// #include<stdio.h>
// int main(){
//     char str[] = "college wallah";
//     char* p = str;// pointer vo string ka phele character ko point kar raha ha
//     * p = 'p';

//     printf("%s",str);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char* ptr = "physics wallah";
//     printf("%s\n",ptr);
//     ptr = "college wallah";// ab pointer p ki bjya c ko point karega
//     printf("%s",ptr);

//     return 0;
// }

#include<stdio.h>
int main(){
    char s1[] = "physics wallah";
    char* s2 = s1;// p par point kar raha ha

    s1[0] = 'A';
    printf("%s",s2);

// adress point karna ka baad jo change s1 ma hoga vo s2 ma bhi hoga
    return 0;
}

