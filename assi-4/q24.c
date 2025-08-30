#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int fraction= a/b;
    printf("%d",fraction);
    if(fraction>1){
        printf("Improper");
    }
    else if(fraction==1){
        printf("Equal");
    }
    else if(fraction<1){
        printf("Proper");
    }
    return 0;
}