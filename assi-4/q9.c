#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",b);
    int c= (pow(a,b));
    if(c>=1000 && c<=10000){

        if(c%2==0){
            printf("even and yes");
        }
        else{
            printf("odd and yes");
        }
    }
    else{
        printf("no");
    }
    return 0;
}