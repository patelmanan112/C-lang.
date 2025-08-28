#include <stdio.h>
int main(){
    int a,b,c,d,e;
    int result;
    int average ;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
     result= a+b+c+d+e;
     average = result/5;

     if(average>=90){
        printf("outstanding");

     }
     else if(average>=70){
        if(a>=50 && b>=50 && c>=50 && d>=50 && e>=50){
            printf("Consistent");
        }
     }
     else if(average>=50){
        printf("Passable");
     }
     else{
        printf("Needs  Improvement");
     }
    return 0;
}