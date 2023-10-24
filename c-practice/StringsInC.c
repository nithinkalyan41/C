#include <stdio.h>
void main(){
    int n,i;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(i=0;i<n/2;i++){
        char temp = a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    printf("\n");
    printf("%s \n",a);
}