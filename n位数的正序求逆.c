#include<stdio.h>
int  main()
{
	int x;
	
	printf("请输入一个数\n");
	scanf("%d",&x);
	
	int t=x;
	int i=1;

	while (t>9){
		t/=10;
		i*=10;
	}
	
	do
	{
	printf("%d",x/i);
	
	if(i>9){
		printf(" ");
	} 
	
	
	x=x%i;
	i/=10;	
	}while(i>0);
	
	return 0;
	
	
}
