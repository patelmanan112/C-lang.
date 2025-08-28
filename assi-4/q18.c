
#include <stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  int num1= a/100;
  int num2=a%100;
  int num11= num1/10;
  int num12= num1%10;
  int num21=num2/10;
  int num22=num2%10;
  
  int sum1= num11 +num12;
  int sum2= num22 +num21;
  if(sum1==sum2){
      printf("Balance Pair");
  }
  else{
      printf("Unbalance Pair");
  }
    return 0;
}
