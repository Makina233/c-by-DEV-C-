#include<stdio.h>
int main()
{
  double money1=0, money2=0;
  int time;
  double length,  sum;
  scanf("%lf %d",&length, &time);
  if(length<=3){
    money1=10.0;
  }else if(length>3&&length<=10){
    money1=(length-3)*2+10;
  }else if(length>10){
    money1=10+7*2+(length-10)*3;
  }
  
  if(time>=5){
  	money2=time/5*2;
  }
  sum=money1+money2;
  printf("%.0lf",sum);
}
