#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);

    if(a%3==0 && b%3==0){
        printf("both are divisible by 3");
    }
    else if(a%3!=0 && b%3==0){
        printf("a is not divisible but divisible by b");

    }
    else if (a%3==0 && b%3!=0){
        printf("b is not divisible but  divisible by a");
    }
    else{
        printf("invalid result");
    }
    return 0;
}