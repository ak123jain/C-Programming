// no of ways so that the person reduce the nth stair ?

// eg 5 stair   ya to ham stair sa 1 siddi niche aa sakte ha ya do ek barri ma
// no of ways 1 1 1 1 1
//            1 1 1 2
//            1 1 2 1
//            1 2 1 1
//            2 1 1 1
//            1 2 2
//            2 2 1
//            2 1 2

#include<stdio.h>
int stair(int n){
if (n == 1) return 1;// agar ek hi stair ha to 1 hi tarika ha aupar aana ka
if (n == 2) return 2;// agar do stair ha to 2 tarika ha aupar jane ka
 int totalways = stair(n-1) + stair(n-2); // do tarika ha nicha aana ka ya to 1 stair nicha 
 //ya ek sath do stair niche single step double step
 return totalways;
}
int main(){
    int n;
    printf("enter the no of stair");
    scanf("%d", &n);
    int ways = stair(n);
    printf("%d ",ways);
    return 0;
}