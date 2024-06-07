#include<stdio.h>

int PerfectNum(int num){
    int i,res = 0;
    
    for (i=0;i<num;i++){
        if(num%i==0)
            res += i;
    }
    
    return res;
    
}

int main(){
    int n ;
    scanf("%d",&n);
    
    int r = PerfectNum(n);
    
    if(r == 2*n)
        printf("%d is a Perfect NUmber",n);
    else
    printf("%d is not a Perfect Number",n);
    
    return 0;
    
}
