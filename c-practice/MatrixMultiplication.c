#include <stdio.h>
void main(){
    int i,j,k,n,m;
    scanf("%d %d",&n,&m);
    int a[m][n],b[m][n],c[m][n];

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                c[i][j]+= a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}