#include<stdio.h.>
int main(){
    int n;
    printf("enter teh value of n");
    scanf("%d",&n);
    int arr[n];// n is size of array
    for(int i=0;i<=n-1;i++){// index array ka size sa ek kam hota ha
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){// index array ka size sa ek kam hota ha
        printf("%d ",arr[i]);
    }

    return 0;
}