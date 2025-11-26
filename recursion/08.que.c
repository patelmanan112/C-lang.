#include <stdio.h>
int sum(int num, int sume , int upd){
    
    if(num<=0){
        return sume;
    }
    upd = num%10;
    sume += 1;
    return sum(num/10, sume , upd); 
}
 
int main() {
    int num =15233;
    int upd;
    printf("%d", sum(num,0, upd));

    return 0;
}