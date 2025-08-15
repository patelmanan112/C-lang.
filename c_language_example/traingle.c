#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
     scanf("%d",&b);
      scanf("%d",&c);
      if (a+b>c && a+c>b && b+c>a){
        if (a==b && b==c && a==c){
            printf("EQUILATERAl");
        }
        else if (a==b && a!=c || a==c && b!=c)
      }
}