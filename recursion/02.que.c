#include <stdio.h>
    int print(int n, int i){
        if(i<=0){
            return 1;
        }
        printf("%d\n",i);
        print(n, i-1);
    }
int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
  printf("%d", print(n,n));

    return 0;
}