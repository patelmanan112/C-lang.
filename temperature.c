#include <stdio.h>
int main (){
     float a;
     printf("temperature around you ");
     scanf("%f",&a);
     if (a>=35){
        printf("Very Hot");
     }
     else if (a>=25){
        printf("Warm and Sunny");
     }
     else{
        printf("Cold");
     }
}