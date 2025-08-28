#include <stdio.h>
int main(){
    float u;
    float a;
    scanf("%f",&u);
    scanf("%f",& a);
    int v=0;
    int t;
    // v= u+ (a*t);
    // u =-a*t;
    t= -u/a;
    if(t<10){
        printf("Quick Stop");
    }
   else if(t>=10 && t<=30){
        printf("Moderate");
    }
   else if(t>30){
        printf("Slow");
    }
    if(a>=0){
        printf("Invalid");
    }
    else{
        printf(" ");
    }
    return 0;
}