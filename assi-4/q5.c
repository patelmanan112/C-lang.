#include <stdio.h>
#include <math.h>
int main(){
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
int a=  sqrt(pow(x,2) + pow(y,2));
if(a<=5){
    printf("Close");
}
else if(a>=5 && a<=15){
    printf("Medium");
}
 else{
    printf("Far");
 }
    return 0;
} 