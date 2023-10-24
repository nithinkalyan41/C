#include <stdio.h>
void main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count = 1;
    for(i=1;i<n;i++){
        if(a[i-1]==a[i]-1){
            count++;
        }else{
            printf("%d \n",count);
            count=1;
        }  
    }
    printf("%d \n",count);

} 