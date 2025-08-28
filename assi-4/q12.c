#include <stdio.h>
int main(){
     int a;
     int hour;
     int hour3;
     scanf("%d",&a);
     int hour1=a/1000;
     int hour2=a/100;
     hour= hour1*10;
     hour3= hour2-hour;
     int min1=a/10;
     int HOUR =hour1 +hour3;
     int min3 = hour2*10;
     int min2= min1-min3;
     int min4= min3*10;
     int last = a-min3;
  int MIN =  min2+ last;
  if(hour2<12){
    printf("AM");
  }
  else if(hour2>=12){
    printf("PM");
  }
   if(MIN==0){
    printf("On the Hour");
  }
  else if(MIN>30){
    printf("Past Half");
  }
  else{
    printf("Before half");
  }
    return 0;
}