#include <stdio.h>
int main(){
    int a;
    printf("enter your monthy");
    scanf("%d",&a);
    int b= a*12;
    if(b>500000){
        printf("salary is above 500000");
    }
    else {
        printf("salary is below 500000");
    }
}