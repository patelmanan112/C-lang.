#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=1;
    int c=1;
    while(b<=a){
  c =c*b;
  printf("%d\n",c);
   b=b+1;
    }
    return 0;
}