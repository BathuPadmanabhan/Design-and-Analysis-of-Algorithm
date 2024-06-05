#include<stdio.h>

int main(){
    int num,i,rem;
    int sum=0;
    
    for(i=0;i<num;i++){
         rem = num % i;
         if (rem == 0){
                 sum  += i;
                 }
     }
    if (sum == num)
         printf("%d is a Perfect NUmber",num);
    else
        printf("%d is Not a Perfect NUmber",num);
}
