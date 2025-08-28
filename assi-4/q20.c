#include <stdio.h>
int main(){
    int u;
    int t,a;
    scanf("%d %d",&u ,&a);
    t=-u/a;
    if(a<=0){
    if(t<10){
        printf("Quick Stop");
    }
    else if(t>=10 && t<=30){
        printf("Moderate");
    }
    else {
        printf("Slow");
    }
   }
    else{
          printf("Invalid");
    }
    return 0;
}