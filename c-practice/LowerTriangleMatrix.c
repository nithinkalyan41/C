#include <stdio.h>
void main(){
    int i,j,n;
    scanf("%d",&n);
    int a[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=n-1;i>-1;i--){
        for(j=n-1;i<j;j--){
            a[i][j]=0;
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}