#include <stdio.h>
#include <limits.h>
void main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count = 1;
    int max = INT_MIN;
    for(i=1;i<n;i++){
        if(a[i-1]==a[i]-1){
            count++;
        }else{
            count=1;
        }  
        if(count>max){
            max = count;
        }
    }
     if(count>max){
            max = count;
        }
    printf("%d \n",max);

} 