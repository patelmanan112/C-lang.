#include <stdio.h>
void even(int num){
 
    if(num%2==0){
        printf("even\n");
    }
    else{
        printf("odd\n");
    }
}
int main(){
    even(4);
    even(56);
    even(23);
    even(13);
    return 0;
}



// #include <stdio.h>
// void type(int num){
//   if(num>0){
//       printf("1\n");
//   }
//   else if(num<0){
//       printf("-1\n");
//   }
//   else{
//       printf("0\n");
//   }
// }
// int main() {
// //   int arr[]={4, 567,789,45};
//     type(-467);
//     type(2);
//     type(0);
//     return 0;
// }





#include <stdio.h>
char type(int num){
      if(num>0){
          return 'p';
    //   printf("1\n");
  }
  else if(num<0){
      return 'n';
    //   printf("-1\n");
  }
  else{
      return 'z';
    //   printf("0\n");
  }
//   return 0;
}


void fac(int factorial , int multi){
    for(int i=1; i<=factorial ; i++){
   multi = multi*i;
    }
    printf("%d",multi);
}
int main(){
    // type(2);
    // type(-1);
    // type(0);
    int multi=1;
    char hi = type(-6);
    int fun1 = type(1);
    printf("%c\n",fun1);
    printf("%c\n",hi);
    int factorial;
    scanf("%d", &factorial);
    fac(factorial ,  multi);
}