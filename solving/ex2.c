

#include <stdio.h>

int main()
{
    //   int start = 21;
    // int end = 31;
    // while(start>=end){
    //     if(start%2==1){
    //         printf("Odd number %d\n", start);
    //     }
    //     start --;
    // }
    // do{
    //     if(start%2==0){
    //         printf("Even number %d\n",start);

    //     }
    //     start = start +1;
    // }
    // while(start<=end);
    int a=1;
    int b;
    scanf("%d",&b);
    int sum =0;
    // for(int a=1; a<=b; a++){
    //     sum +=a;
  
    // }
        //   printf("sum of %d",sum);
        
        
        
        //   while(a<=b){
        //       sum+=a;
        //       a++;
        //   }
        //   printf("sum is %d",sum);
        
        
        do{
            sum+=a;
            a++;
}
        while(a<=b);
        printf("sum is %d",sum);

    return 0;
}