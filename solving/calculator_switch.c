#include <stdio.h>

int main()
{
   
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d ",&b);
     int c;
    scanf("%d",&c);
    switch(c){
        case '+': printf("%c",c= a+b);
        break ;
        case '-': printf("%c",c=a-b);
        break ;
        case '%': 
        printf("%d",c=a%b);
        break ;
        case '*': 
        printf("%d",c=a*b);
        break ;
        case '/':
        printf("%d",c=a/b);
        break;
        default :
        printf("invalid");
        break;
     }
    return 0;
}