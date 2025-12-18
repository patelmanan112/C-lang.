#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int c; 
    int d=0;
for(;a!=0; a=a/10){
   c=a%10;
   d= d*10 +c;
    // printf("%d\n",d);/
}
      printf("%d\n",c);
    
    return 0;
}