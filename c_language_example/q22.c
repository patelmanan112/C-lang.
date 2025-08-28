#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    int b= (int )a;
    if( b==50 || b==51 || b==53 || b==55){
        printf("prime Digit");
    }
    else if(b%2==0){
        printf("Even Non-prime");
    }
    else {
        printf("odd Non-prime");
    }
    return 0;
}