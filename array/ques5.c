#include<stdio.h>
int main(){
    int x = 12;
    int arr[8] = {1,2,3,4,5,6,7,8};
    int triplets = 0;
    for(int i=0;i<=6;i++){
        for(int j=i+1;j<=7;j++){
            for(int k=j+1;k<=7;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    triplets++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d",triplets);
    return 0;
}