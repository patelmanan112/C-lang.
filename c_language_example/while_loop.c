#include  <stdio.h>
int main(){
    int a;
    int b;
    int c=0;
    scanf("%d",&a);
    while(b<a){
        // b= b++;
        if(b%a==0){
            b++;
            // printf("prime");
            break ;
        }
    }
    if(c==0){
        printf("prime");
    }
        else {
            printf("not prime");
        }
    
    return 0;
}