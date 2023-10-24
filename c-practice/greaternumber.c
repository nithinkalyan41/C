#include <stdio.h>
void main(){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a>b)
            if(a>c)
                printf("max number is : %d",a);
            else
                printf("max number is : %d",c);
        else
            if(b>c)
                printf("max number is : %d",b);  
            else
                printf("max number is :%d",c);              
}