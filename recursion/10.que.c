#include <stdio.h>
int arrSum(int arr[] , int i , int sum , int len){
     sum = sum+ arr[i];
    if(i==len){
        return sum;
    }
   
    return arrSum(arr , i+1, sum , len);
}
int main() {
  int arr[] = {2,1,3,4,5};
  int len = sizeof(arr)/sizeof(arr[0]);
//   printf("%d", len);
  printf("%d",arrSum(arr , 0 ,0 , len-1));

    return 0;
}