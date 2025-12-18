#include <stdio.h>

int main() {
    
    for(int b=1; b<=5; b++){
        printf("%d\n",b);
    }
    
    printf("through while loop");
    int a=1;
    while(a<=5){
        printf("%d\n",a);
         a=a+1;
    }
   printf("through do while loop");
     int c=1;
     do{
         printf("\n%d\n",c);
         c=c+1;
     }

     while(c<=5);



    return 0;
}