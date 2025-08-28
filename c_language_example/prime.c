#include <stdio.h>
#include <stdbool.h>
int main(){
    int a;
   scanf("%d",&a);
   bool isprime=true ;
    for (int b=2; b<a;  b++){
        
        if(a%b==0){
            isprime =false;
            break;
        }
    }
        if(isprime == true){
            printf("prime no.");
        }
        else{
            printf("not a prime no.");
        }
        
    return 0;
}


