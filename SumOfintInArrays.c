#include <stdio.h>

int main() {
    
    int n,i,j,t;
    scanf("%d",&n);
    
    int a[n];
    printf("Enter %d values: ",n);
    
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
       }
    
    printf("Enter Target: ");
    scanf("%d",&t);
    
    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
          if (a[i]+a[j]==t){
              printf("[%d, %d]",i,j);
              }
      }
    } 
    return 0
}
