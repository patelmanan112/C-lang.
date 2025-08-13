#include <stdio.h>
 
int main(){
 float b;
 printf("enter the time ");
 scanf("%f",&b);
  if (b>5.00 && b<11.59){
    printf("Good Morning");
  }
  else if (b>12.00 && b<17.59){
    printf("Good afternoon");
  }
  else if (18>b && 21.59<b){
    printf("Good Evening");
  }
  else {
    printf("Good night");
  }



    return 0;
}