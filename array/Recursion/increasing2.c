// wap to [print from 1 to n]
#include<stdio.h>
void increasing(int n){
    if(n==0) return;
    increasing(n-1); 
    printf("%d ",n);
    return ;
}
int main(){
    int n;
    printf("enter teh no");
    scanf("%d",&n);
    increasing(n);
    return 0;
}


// void increasing(int n){ n=3
//     if(n==0) return;
//     increasing(n-1); 2 ko call
//     printf("%d ",n);
//     return;
// }
// void increasing(int n){ n = 2
//     if(n==0) return;
//     increasing(n-1); 1 ko call
//     printf("%d ",n);
//     return ;
// }
// void increasing(int n){ n = 1
//     if(n==0) return;
//     increasing(n-1); 0 ko call
//     printf("%d ",n);
//     return ;
// }
// void increasing(int n){  n = 0
//     if(n==0) return; khatam ab ya vaha jyega jisna esko call lagai thi increasing(n-1)
//     increasing(n-1); 
//     printf("%d ",n);
//     return ;
// }
// void increasing(int n){ n = 1
//     if(n==0) return;
//     increasing(n-1); XX
//     printf("%d ",n); to 1 print ho gyega
//     return ;   ab ya vaha jyega jisna es function ko call lagai thi
// }
// void increasing(int n){ n = 2
//     if(n==0) return;
//     increasing(n-1); 
//     printf("%d ",n);  2 print
//     return ;
// }
// void increasing(int n){ n = 3
//     if(n==0) return;
//     increasing(n-1); 
//     printf("%d ",n); 3 print
//     return ;
// }
