#include <stdio.h>
int main()
{
	int hour1,minute1;
	int hour2,minute2;
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	int ih=hour2-hour1,im=minute2-minute1;
if( im < 0 ) {
	im=im+60;
	ih--;
}
printf("时间差是%d时%d分",ih,im);
}
