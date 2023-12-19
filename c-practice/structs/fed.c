#include <stdio.h>
typedef struct book{
      char name[10];
      float cost;
}book;
int main(){
    book b1;
    strcpy(b1.name,"murder");
    b1.cost = 10.25;
    printf("%s,%f\n",b1.name,b1.cost);
     book b2;
    strcpy(b2.name,"murder");
    b2.cost = 10.25;
    printf("%s,%f\n",b1.name,b2.cost);
}