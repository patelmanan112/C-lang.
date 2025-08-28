#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
  d= b-a;
e= c-b;
if(d==e){
    if(d>10 || e>10){
        printf("Large Gap");
    }

 else if(d==0 || e==0){
    printf("Constant");
 }
 else {
    printf("small");
 }
}
 else{
    printf("Irregular");
 }
    return 0;
}