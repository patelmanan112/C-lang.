#include <stdio.h>
int main(){
int a;
 printf("enter your side of area");
 scanf("%d",&a);
  int c = a*a;
<<<<<<< HEAD
  if (c>100){
=======
 printf("%d",c)
  if (a>100){
>>>>>>> 46948f5bc4f3d64c4bec48f93b971b7f844c3c65
    printf("large square");
  }
  else {
    printf("small square");
  }
  return 0;
}
