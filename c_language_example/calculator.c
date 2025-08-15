#include <stdio.h>

    int main(){
    float a;
  float b;
  char c;
   float d;
      printf( "enter the value of a  ");
      scanf("%f",&a);
       printf("enter the value of b ");
      scanf("%f",&b);
       printf("enter n opration ");
      scanf(" %c",&c);
      if ( c=='+'){
        d =a+b;
        printf("%f",d);
      }
       else if (c=='-'){
        d =a-b;
        printf("%f",d);
       }
       else if (c=='*'){
        d = a*b;
        printf("%f",d);
       }
       else if (c=='/'){
        d=a/b;
        printf("%f",d);
       }
       else {
        printf("invalid opration");
       }
       return 0;
    }