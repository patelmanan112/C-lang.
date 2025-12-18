#include <stdio.h>
int main(){

    int a;
    int avg,b,boy=0, sum =0;
    do{
        scanf("%d",&a);
  
        if(a!=0){
            
        
        sum =sum + a;
         boy++;
        avg = sum/boy;
        
        //     printf("%d",sum);
        //     printf("%d",avg);
         }
    }
    while(a!=0);
    
            printf("%d\n",sum);
            if(boy>0){
            printf("%d\n",avg);
            }
            else{
                printf("Invalid");
            }
    return 0;
} 