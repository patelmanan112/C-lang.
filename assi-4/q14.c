

#include <stdio.h>

int main()
{
   int a,b;
   scanf("%d %d" ,&a, &b);
   while(a!=b){
       if(a>b){
           a=a-b;
           printf("%d\n",a);
       }
       else if(b>a){
           b=b-a;
           printf("%d\n",b);
       }
   }

    return 0;
}