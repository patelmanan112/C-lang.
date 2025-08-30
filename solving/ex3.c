
#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d",&b);
    int sum =0;
    
for(int c=b; c>0;c= c/10){
  a=  c%10;
  sum =sum +a;
  
  }
    printf("%d",sum);

return 0;
}