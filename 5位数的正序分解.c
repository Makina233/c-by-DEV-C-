#include<stdio.h>
int main()
{
	int x;
	int i=10000;
	printf("请输入一个5位数\n");
	scanf("%d",&x);
	do
	{
	printf("%d\n",x/i);
	x=x%i;
	i/=10;	
	}while(i>0);
	
	return 0;
	  
}
