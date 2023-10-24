#include <stdio.h>
void main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max;
    int secMax;
    if(a>b){
        max = a;
        secMax = b;
    }else{
        max = b;
        secMax = a;
    }
    if(c>max){
        secMax = max;
        max = c;
    }
     printf("%d %d \n",max,secMax);
}