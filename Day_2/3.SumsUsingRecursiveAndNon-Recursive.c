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
     scanf("%d",&ch);
     printf("Enter 1 for recursive and @2 for NonRecursive");
     
     if(ch ==1){
     scanf("%d",&n);
     int res = fact(n);
     printf("%d",res);
     }
     
     return 0 ;
     
}
