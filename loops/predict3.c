#include<stdio.h>
int main(){
    int x=4,y,z;//x ka ek dabba ha y ka ek dabba ha or z ka ha to y ma x ki ek value kam hogi or x ka dabba
    y=--x;//ma 3 ab z ka dabba ma 3 aa gagayaga or x ka ma 2
    z=x--;
    printf("\n%d%d%d ",x,y,z);
    return 0;
}