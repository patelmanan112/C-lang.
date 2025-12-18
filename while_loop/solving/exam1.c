#include <stdio.h>
int main(){
    int start = 21;
    int end = 17;
    while(start>=end){
        if(start%2==1){
            printf("Odd number %d\n", start);
        }
        start --;
    }
    // do{
    //     if(start%2==1){
    //         printf("Oddd number %d\n",start);

    //     }
    //     start = start -1;
    // }
    // while(start>=end)
    
    
    return 0;
}