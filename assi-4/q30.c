 #include <stdio.h>

int main()
{
int a;
scanf("%d",&a);
int digit ,upd;
while(upd!=0){
digit=    a%10;
upd   = a/10;
    printf("%d",upd);
}

    return 0;
}
