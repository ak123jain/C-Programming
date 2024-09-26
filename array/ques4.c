//find the total no of pair in the array whose sum is equal to teh given value value X?
#include<stdio.h>
int main(){
    int x = 12;
    int arr[8] = {1,2,3,4,5,6,7,8};
     int totalpair = 0;
    //concept = 1 ki value ham baki sab element(2,3,4,5,6,7) sa compare arege
    //  2 ki value (3,4,5,6,7) sa compare karege
    // to ham nested loop ka use karege 
    for(int i=0;i<=7;i++){// ya loop 0 sa 6 tak element ka index ka liye
        for(int j=i+1;j<=7;j++){// ya loop 1 sa 6 tak ka element ka index ka liye
        if(arr[i]+arr[j]==x){
            totalpair++;
            printf("(%d,%d)\n",arr[i],arr[j]);
        }

        }

    }
    printf("%d",totalpair);
    return 0;
}