#include <stdio.h>
int main(){
int n;
scanf("%d", &n);
int f1=0;
int f2=1;
int f3=0;
for(int i=2; i<n ; i++){ // 1 2 
   f3=  f1+f2; // 1 1 2  1 2 
    f1= f2; // 1  2 
    f2= f3; // 2  3 
    printf("%d\n",f3);
}
return 0;
}