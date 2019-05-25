#include<stdio.h>
int main()
{
	int x;
	int i = 2;
	int isPrime=1;
	printf("请输入一个数\n");
	
	scanf("%d",&x);

	for(i=2; i<x; i++)
	{
		if(x % i==0){
			isPrime=0;
			break;	
		}
			
	}
	if(isPrime==1){
		printf("你输入的是素数");
		
	} else if(isPrime==0){
		
		printf("你输入的不是素数"); 
	}
	return 0;
}
