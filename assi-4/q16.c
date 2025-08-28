
#include <stdio.h>

int main()
{
 int R;
 int G;
 int B;
 scanf("%d %d %d", &R,&G,&B);
 if(R==G && R==B){
     printf("Shape of Grey");
 }
 else if(R>G && R>G){
     printf("Warm");
 }
 else if (B>R && B>G){
     printf("Cool");
 }
 else{
     printf("Neutral");
 }

    return 0;
}