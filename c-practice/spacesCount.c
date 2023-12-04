#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char temp;
    scanf("%c",&temp); 
    char text[n];
    scanf("%[^\n]",text);
    int count = 0;
    int i;
    for(i=0;i<strlen(text);i++){
        if(text[i]==' '){
            count++;
        }
    }
    printf("%d \n %d \n",count,strlen(text));
    return 0;
}
