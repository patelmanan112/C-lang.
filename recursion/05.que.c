#include <stdio.h>
int sum(int num, int sume , int upd){
    
    if(num<=0){
        return sume;
    }
    upd = num%10;
    sume += upd;
    return sum(num/10, sume , upd); 
}
 
int main() {
    int num =153;
    int upd;
    printf("%d", sum(num,0, upd));

    return 0;
}