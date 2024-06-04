#include<stdio.h>

fib(n){
    if (n<=1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        print("%d ", fib(i));
    }
    return 0;
}