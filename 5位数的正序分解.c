#include<stdio.h>
int main()
{
	int x;
	int i=10000;
	printf("������һ��5λ��\n");
	scanf("%d",&x);
	do
	{
	printf("%d\n",x/i);
	x=x%i;
	i/=10;	
	}while(i>0);
	
	return 0;
	  
}
