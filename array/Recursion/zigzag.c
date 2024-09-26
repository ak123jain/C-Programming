// 111
// 211121112  2 ka bich ma 111 ki call laga di
// 321112111232111211123    3 ka bich ma 211121112 ki call laga di
// 432111211123211121112343211121112321112111234
// print zig zag  jo hmara no ha hma usko 3 baar print kar diya
#include<stdio.h>
void zigzag(int n){
 if(n == 0) return;
printf("%d ",n);
zigzag(n-1);
printf("%d ",n);
zigzag(n-1);
printf("%d ",n);
return;
}
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    zigzag(n);
    return 0;
}