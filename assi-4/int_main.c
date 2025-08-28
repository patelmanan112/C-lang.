
#include <stdio.h>

int main()
{
int a , digit; 
scanf("%d",&a);
int upd;
while(upd!=0){
    digit =a%10;
    upd =a/10;
    printf("%d\t",digit);
    a= upd;
}
    return 0;
}