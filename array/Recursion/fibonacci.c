//  calculate the nth fibonacci term 
//   1 1 2 3 5 8 
//   1 2 3 4 5 6
 
 #include<stdio.h>
int fibonacci(int n){
if(n == 1 || n==2) return 1;
 int ans = fibonacci(n-1) + fibonacci(n-2); 
 return ans;
}
int main(){
    int n;
    printf("enter teh no");
    scanf("%d", &n);

    int fibo = fibonacci(n);
    printf("%d ",fibo);
    return 0;
}