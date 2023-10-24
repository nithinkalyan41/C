#include <stdio.h>
void main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(i!=j){
                    int temp = a[i][j];
                    a[i][j] = a[j][i];
                    a[j][i] = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}