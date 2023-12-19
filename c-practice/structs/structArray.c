#include <stdio.h>
struct student{
  int rollNo;
  int marks;
}s[3];

int main(){
  s[0].rollNo=1;
  s[0].marks=95;
  s[1].rollNo=2;
  s[1].marks=84;
  s[2].rollNo=3;
  s[2].marks=65;
  for(int i=0;i<sizeof(s)/sizeof(s[0]);i++){
    printf("[%d,%d] \n",s[i].rollNo,s[i].marks);
  }

}