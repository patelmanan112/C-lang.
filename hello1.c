#include <stdio.h>
int main(){
 int a;
 printf("enter the value of a ");
 scanf("%d",&a);
  if  (a%2==0){
    if(a%4==0){
        printf("a is divisible by both 2 and 4");
    }
  }
   
  else{
    printf("a is not divisible by 2 or 4 or both");
  }

 return 0;
}