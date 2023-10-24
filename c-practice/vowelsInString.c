#include <stdio.h>
void main(){
    int n,i,c=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    char s1[n];
    scanf("%s",s1);
    for(i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u'){
            c++;
        }
    }
    // int x = strcmp(s,s1);
    // if(x){
    printf("%d \n",c);
    //}
}