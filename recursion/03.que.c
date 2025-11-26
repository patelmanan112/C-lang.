#include <stdio.h>
    int print(int n, int i, int copy){
        
        if(i==copy){
            return n;
        }
        n = n*i;
        // printf("%d\n",n*i);
        print(n, i+1, copy);
    }
    // 5 4 3 2 1 
int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("%d", print(n,2 , n) );

    return 0;
}