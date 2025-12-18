#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
     char c;
     scanf("%c",&c);
     switch(c){
        case 1: c= a+b;
        printf("%d",c);
        break ;
        case 2: c= a-b;
        printf("%d",c);
        break ;
        case 3: c= a%b;
        printf("%d",c);

     }

    return 0;
}