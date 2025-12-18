#include <stdio.h>

int main() {
   int array[10]={45,47,83,46,28,39,40,26,38,69};
   int sum=0;
   for(int i=0; i<=9;i++){
       for(int b=2;b<array[i];b++){
           if(array[i]%b!=0){
               sum+=array[i];
                printf("%d\n",sum);
           }
        //   else{3
        //       sum+=array[i];
        //     //   printf("%d\n",sum);
        //   }
        // else if(array[i]%b!=0){
        //     sum+=array[i];
        //     // printf("%d\n",sum);
        // }
       }
   }
//   printf("%d\n",sum);
    return 0;
}