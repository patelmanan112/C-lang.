#include <stdio.h>
#include <math.h>
int main(){
    int A;
    int B;
    int C;
    scanf("%d",&A);
        scanf("%d",&B);
            scanf("%d",&C);
    int a = pow(A,2);
    int b= pow(B,2) +pow(C,2);
    if(a==b){
        if(B==C){
            printf("Square");
        }
    }
    else if(a!=b){
        printf("Rectangle");
    }
    else{
        printf("invalid");
    }
    
    return 0;
}