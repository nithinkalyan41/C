#include <stdio.h>
void main(){
    char a[30];
    scanf("%[^\n]",a);
    int n = count(a);
    char* strings = print(a,n);
   

}
int count(char a[]){
    int i,c=0;
    for(i=0;i<strlen(a);i++){
        if(a[i]==' '){
            c++;
        }
    }
    return c+1;
}
char* print(char a[],int n){
    int i,j=0;
    char* strings[n];
    char temp[5];
    for(i=0;i<strlen(a);i++){
        if(a[i]!=' '){
            temp[i]= a[i];
        }else if(strlen(temp)>0){
            strings[j] = temp;
            j++;
            temp = "";
        }
    }
    strings[j]=temp;
    
}