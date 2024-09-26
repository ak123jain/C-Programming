  #include<stdio.h>
  int main(){
    int sumofevenendex = 0;
    int sumofodd= 0;
    int arr[7] = {1,2,3,4,5,6,7};

    for(int i=0;i<=6;i++){
        if(i%2==0) 
       sumofevenendex = sumofevenendex + arr[i];
    
    else{
    sumofodd = sumofodd + arr[i];
    }
    }
    printf("%d ", sumofevenendex-sumofodd);
    return 0;
  }