#include<stdio.h>
int main()
{
	int x;
	int i = 2;
	int isPrime=1;
	printf("������һ����\n");
	
	scanf("%d",&x);

	for(i=2; i<x; i++)
	{
		if(x % i==0){
			isPrime=0;
			break;	
		}
			
	}
	if(isPrime==1){
		printf("�������������");
		
	} else if(isPrime==0){
		
		printf("������Ĳ�������"); 
	}
	return 0;
}
