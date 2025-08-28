#include <stdio.h>
int main(){
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float g;
    float h;
    scanf("%f",a);
    if(a<=100){
     b=a*5;
     printf(" the amount you have to pay is :%f",b);
    }
    else if( a>100 && a<=200){
        c= a-100;
        d=c*7;
        e = d+500;
        if(e>500 && a>150){
       printf("high consumption");
        }
        printf(" the amount you have to pay is :%f",e); 
    }
     else if(a>200){
         f=a-200;
         g= f*10;
        h= g+1200;
        printf("the amount you have to pay is :%f",h);
        if(e>500 && a>150){
       printf("high consumption");
        }
     }
    return 0;
}