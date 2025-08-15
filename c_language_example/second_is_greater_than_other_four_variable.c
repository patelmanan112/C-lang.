#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    printf("enter the value of a ");
    scanf("%d",&a);
     printf("enter the value of b ");
    scanf("%d",&b);
     printf("enter the value of c ");
    scanf("%d",&c);
     printf("enter the value of d ");
    scanf("%d",&d);
    if(a>b && b>c && b>d || c>b && b>a && b>d || d>b && b>a && b>c){
        printf("b is second largest value %d",b);
    }
    else if (b>a && a>c && a>d|| c>a && a>b && a>d || d>a && a>b && a>c){
        printf("a is second largest value %d",a);
    }
    else if (d>c && c>a && c>b || a>c && c>b && c>d || b>c && c>a && c>d ){
        printf("c is second largest value %d",c);
    }
    else if (a>d && d>c && d>b || b>d && d>a && d>c ){
        printf("d is the second largest value %d",d);
    }
    else {
        printf("invalid");
    }
    return 0;
}