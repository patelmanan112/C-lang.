#include <stdio.h>
int main(){
    int a;
    printf("enter the factorial no. you want to calculate factorial  ");
    scanf("%d",&a);
    int c =1;
    for(int b=1; b<=a; b=b+1){
        c=b*c;
        printf("%d\n",c);
    }
    return 0;
}