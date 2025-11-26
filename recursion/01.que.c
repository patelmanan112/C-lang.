#include <stdio.h>
    int print(int n, int i){
        if(n==i){
            return n;
        }
        printf("%d\n",i);
        print(n, i+1);

        // print(1 print( 2 print(9print(10, 10))))
    }
int main() {
    int n; // 
    int i;
    printf("Enter the value of n : ");
    scanf("%d",&n); // 10
  printf("%d", print(n,1));

    return 0;
}