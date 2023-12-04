#include <stdio.h>
void main(){
   char text[5];
   char res[5];
   scanf("%[^\n]",&text);
   int i,j;
   for(i=0;i<strlen(text);i++){
    if((text[i]>='A' && text[i]<='Z') || (text[i]>='a' && text[i]<='z') || (text[i]>=0 && text[i]<=9)){
        res[j]=text[i];
        j++;
    }
   }
   printf("%s",res);
}