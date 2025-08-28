#include <stdio.h>
int main(){
    float fuel;
    float km;
    scanf("%f",&fuel);
    scanf("%f",&km);
   float efficient= km/fuel;
   if(km>500){
    if(efficient<10){
        printf("Inefficient Long Trip");
    }
        else {
            printf("Efficient");
        }
   }
   else if(km<=500){
    if(fuel>50){
    printf("Excessive");
   }
   else{
    printf("Moderate");
   }
}
    return 0;
}