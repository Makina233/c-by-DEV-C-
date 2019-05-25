#include<stdio.h>
#include<stdlib.h> 
int main()
{
	int x=100;
	scanf("%d",&x);
	
	if (x>0)
	{
	x=1;
	}
	else if (x==0)
	{		
	x=0;
	}
	else 
	{
		x=2*x;
	}
	
	printf("%d",x);	
	system("pause")	;
}





