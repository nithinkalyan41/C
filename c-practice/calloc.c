#include <stdio.h>
int main(){

  int *p = (int*) calloc(10,sizeof(int));
  *p=10;
  *(p+1)=20;
  *(p+2)=30;
  *(p+3)=40;
  *(p+4)=50;
  *(p+5)=60;
  *(p+6)=70;
  *(p+7)=80;
  *(p+8)=90;
  *(p+9)=100;


  p = realloc(p,(10*sizeof(int)));

  for(int i=0;i<10;i++){
    printf("%d \n",*(p+i));
  }
  free(p);
  return 0;
}