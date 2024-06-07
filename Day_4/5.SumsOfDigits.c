#include<stdio.h>

int Sum(int digits){
    int rem = 0;
    
    rem = digits % 10;
    
    return rem;
    
}

int main(){
    int num = 123;
    int sum = 0;
   while(num>0){
       sum = sum+Sum(num);
       num /= 10;
   }
    
    printf("%d",sum);
    
    return 0;
    
}
    
