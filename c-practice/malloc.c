#include <stdio.h>
int main(){
  int *p = (int*)malloc(5 * sizeof(int));
  p[0] = 10;
  p[1] = 20;
  p[2] = 30;
  p[3] = 40;
  p[4] = 50;
   p[5] = 60;
  for (int i = 0; i < 5; i++) {
    printf("%d\n", *(p+i));
  }
  printf("%d \n \n",*(p+5));
  free(p);
 
  
  
  for (int i = 0; i < 5; i++) {
    printf("%d\n", *(p+i));
  }
  return 0;
}