#include<stdio.h>

int CountRepeat(int *arr,int s){
    int i,j,count = 0;
    int c1 = 0;
    for (i=0;i<s;i++){
        for (j=i+1;j<s;j++){
            if (arr[j] == arr[i] + 1){
                     c1++;
                     }
        }
    }
    if (c1 > 0)
         count += c1;
         
    return count;
    
int main(){
    int a[3] = {1,2,3};
    
    int result = CountRepeat(a,3);
    
    printf("%d",result);
    
    return 0;
}
        
