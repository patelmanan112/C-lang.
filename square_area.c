#include <stdio.h>
int main(){
int a;
 printf("enter your side of area");
 scanf("%d",&a);
  int c = a*a;
  if (c>100){
    printf("large square");
  }
  else {
    printf("small square");
  }
  return 0;
}