#include<stdio.n>

int fib(int num){
    if (num<0)
        return num;
    else
      return fib(n-1) * fib(n-2);
      
}

int main(){
    int n,i;
    
    scanf("%d",&n);
    
    for(i=1;i<n;i++){
         printf("%d ",fib(i));
         
         }
    return 0;
}
