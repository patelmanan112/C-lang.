#include <stdio.h>
int table(int num ,int i){
    if(i>10){
        return 0;
    }
    printf("%d * %d = %d\n", num, i, num*i);
    return table(num , i+1);
}
int main() {
int num = 8;
int i =1;
table(num, i);

    return 0;
}