#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b =1;
    int c;
    for(int b=1 ; b<=10; b=b+1){
        c=a*b;
        printf("%dX%d=%d\n",a,b,c);
        // printf("*");
        // printf("%d",b);
        // printf("=");
        // printf("%d"\t,c);
    }
}