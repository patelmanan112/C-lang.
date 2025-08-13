#include <stdio.h>
int main(){
    int a;
    printf("enter the ph value ");
    scanf("%d",&a);
    if (a<7){
        printf("acidic");
    }
    else if (a==7){
        printf("neural");
    }
    else if (a>7 && a<=10){
        printf("basic");
    }
    else if(a>10 && a<=14){
        printf("Strong Basic ");
    }
    else {
        printf("invalid");
    return 0;
}