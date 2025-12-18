#include <stdio.h>
int main(){
    int a;
    int b =0;
    for(int a=10; a<50; a=a+1){

    
    for(int b =11; b<=49; b=b+1){
        if(a%b==0){
            printf("Odd-Prime");
            b=1;
            continue;
        }
    }
}
    return 0;
}