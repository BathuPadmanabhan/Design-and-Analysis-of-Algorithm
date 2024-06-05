//RECURSIVE
#include<stdio.h>

int fact(int num){
    if (num<=0)
         return num;
    else {
         return fact(num-1) * num;
         }
}

int  main(){
     int ch, n;
    
     scanf("%d",&n);
     int res = fact(n);
     printf("%d",res);

     
     return 0 ;
     
}
//NON_RECURSIVE
/**

int main() {
    int n = 5;
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    printf("Factorial of %d is %d\n", n, result);

    return 0;
}

**/
