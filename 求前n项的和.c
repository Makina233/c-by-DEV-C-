#include<stdio.h>
int main ()
{
	int i;
	int n;
	double sum;
	double sign=1.0;
	
	printf("请输入项数\n");
	scanf("%d",&n) ;
	
	for(i=1; i<=n; i++)
	{
		sum+=sign/i;
		sign=-sign;
	}
	printf("和是%f",sum);
}
