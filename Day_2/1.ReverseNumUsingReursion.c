#include<stdio.h>

int reverse(int num,int rev){
    
    if (num ==0 ){
            return rev;
    }
    else {
         rev = rev*10 + num % 10;
         return reverse(num/10, rev);
         }
}

int main(){
    int n;
    scanf("%d",&n);
    
    int reversed = reverse(n,0);
    
    printf("%d is Reversed -> %d",n,reversed);
    
    return 0;
    
}
