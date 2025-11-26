#include <stdio.h>
    int sumNatural(int n, int i , int sum){
         sum +=i;
        if(n<=i){
            return sum;
        }
      
        // printf("%d\n",sum);
        return sumNatural(n, i+1 , sum);
    }
int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("%d",  sumNatural(n,1 ,0));
    
    

    return 0;
}