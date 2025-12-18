#include <stdio.h>
int main(){
    int roll_number[10] ={45,47,83,46,28,39,40,26,38,69};
    int sum,b ,sum1,sum2,sumt, sump=0;
                        //   0   1   2   3  4  5  6  7  8  9 
                        // ans 1
                        // for(int i=0; i<10; i++){
                        //     if(roll_number[i]%3==0){
                        //         printf("%d\n",roll_number[i]);
                        //     }
                        // }
                        
                        
                        
                        // ans 2
                        // for(int i=0; i<10; i++){
                        //     if(roll_number[i]%2==1){
                        //         sum+=roll_number[i];
                            
                        //     }
                          
                        // }
                        //   printf("%d\n",sum);
                         
                         
                         
                        //  ans 3
                        // for(int i=0; i<10; i++){
                        //     if(roll_number[i]%2==0){
                        //         sum1+=roll_number[i];
                        //     }
                        //     else if(roll_number[i]%2==1){
                        //         sum2+=roll_number[i];
                        //     }
                        //     sumt=sum1-sum2;
                        
                        // }
                            
                        // printf("%d\n",sumt);
                        
                        
                        
                        // ans 4
                        for(int i=0; i<10;i++){
                            
                            for(int b=2; b<roll_number[i]; b++){
                                if(roll_number[i]%b==0){
                                    sump+=roll_number[i];
                                 
                                }
                                   continue;
                            }
               
                        }
                                     printf("%d\n",sump);
                        
    return 0;
}