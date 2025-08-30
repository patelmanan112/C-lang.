
#include <stdio.h>

int main()
{
  int n1,n2,n3,n4;
  scanf("%d %d %d %d",&n1, &n2,&n3, &n4);
  if(n1+n2== n3+n4){
    printf("Balanced");
  }
  else if(n1+n3==n2+n4){
    printf("Balanced");
  }
  else if(n1+n4== n2+n3){
    printf("Balanced");
  }
  else{
    printf("Unbalanced");
  }

    return 0;
}
