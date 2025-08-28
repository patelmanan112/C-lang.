
#include <stdio.h>

int main()
{
    float a;
    scanf("%f",&a);
    if(a<18.5){
        printf("Underweight");
    }
    else if (a>=18.5 && a<=24.9){
        printf("Normal");
    }
    else if(a>25 && a<29.9){
        printf("Overweight");
    }
    else if(a>=30 && a<35){
        printf("Obese");
    }
    else if(a>35 && a<40){
        printf("Serve");
    }
    else{
        printf("Extreme");
    }
    return 0;
}