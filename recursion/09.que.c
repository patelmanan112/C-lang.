#include <stdio.h>
    int Power(int n, int m, int count , int copy ){
     
        if(count>=m){
            return n ;
        }
      
        // printf("%d\n",sum);
        return Power(n*copy, m , count+1 , copy);
    }
int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int m;
    printf("Enter the value of m : ");
    scanf("%d",&m);
    printf("%d",  Power(n,m ,1 , n));
    
    

    return 0;
}