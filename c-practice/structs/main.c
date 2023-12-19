#include <stdio.h>
struct Animal{
  char name[10];
  int age;
  float weight;
};

int main(){
  struct Animal animal;
  strcpy(animal.name,"Hippo");
  animal.age = 15;
  animal.weight = 180.24;
  printf("[%s,%d,%f]",animal.name,animal.age,animal.weight);
  return 0;
}