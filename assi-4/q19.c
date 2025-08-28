
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    
    if(a>=1 && a<9){
        printf("%d",a);
    }
    if(a>=10 && a<=99){
        int num1=a/10;
        int num2=a%10;
        int sum1= (num1*num1) +(num2*num2);
        printf("%d",sum1);
    }
    if(a>=100 && a<=999){
        int num3= a/100;
        int num4=a/10;
        int num5 =a%10;
        int num6 =num3*10;
        int num7= num4-num6;
        int  sum2= (num3*num3) +(num7*num7) +(num5*num5);
        printf("%d",sum2);
    }
    return 0;
}