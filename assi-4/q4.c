#include <stdio.h>
int main(){
      int value;
      printf("enter three digit value");
      scanf("%d",&value);
      int num1= value/100;
      int num2=value/10;
      int d1= num1*10;
      int d2= num2-d1 ;
      int v1 = num2*10;
      int d3= value - v1;
        int product = d3*d1*d2;
        int sum= d1+d2+d3 ;

        if(product%sum==0){
            printf("divisible ");
        }
        else {
            printf("not divisible");
        }
    return 0;
}


