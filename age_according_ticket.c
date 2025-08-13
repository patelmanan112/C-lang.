#include <stdio.h>
int main (){
    int a;
    printf("enter your age ");
    scanf("%d",&a);
     if(a<=5){
        printf("free");
     }
     else if (a<=12 && a>5){
        printf("50");
     }
     else if (a<=60  && a>12){
        printf("100 rupees");
     }
     else {
        printf("70 rupees");
     }
     return 0;
}