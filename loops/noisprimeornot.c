//wap to check if a number is a composite or not
//prime no= jiska factor 1 or vo khud hote ha eg:2,3,5,7,13,17,19,23 
//prime is opposite of composite no
#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE VALUE OF N");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            printf("number is composite");
        break;//agar condition ek point par satisfy ho gyi to vo print kar dega aaga nahi gyega loop
        } //ya sirf composite no batayaga
        
    }
    return 0;      
}