#include <stdio.h>
int main(){
    int a ;
    scanf("%d",&a);
    int d;
    for (int b=1; b<=a ; b=b+1){
        d= a*b;
        printf("%d",a);
        printf("*");
        printf("%d",b);
        printf("=");
        printf("%d",d);
    }
    return 0;
}