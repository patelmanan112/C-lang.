#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    int c=0;
    while(b<a){
        if(a%b==0){
            b++;
            c=1;
            break ;
           
        }
        if(c==0){
            printf("prime no.");
        }
        else{
            printf("not a prime no.");
        }
    }
    return 0;
}