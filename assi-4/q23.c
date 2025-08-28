#include <stdio.h>
int main(){
    float a,b,c,d,e;
    scanf("%f %d %f %f %f",&a, &b , &c, &d, &e);
    if(a>c &&  b>c && c>d && c>e || d>c && e>c && c>a && c>b || b>c&& d>c && c>a && c>e || e>c && d>c && c>a && c>b){
        printf("%d",c);
    }
    else if(a>b && c>b && b>d && b>e){
        printf("%d",b);
    }
    else if(a>d && e>d && d>a)
    return 0;
}