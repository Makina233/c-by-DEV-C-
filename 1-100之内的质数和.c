//����ѭ��ʵ�� 1����100 ���ڵ�������
#include<stdio.h>
int main()
{
	int x;
	int sum=0;
	for(x=2; x<=100; x++){
	int i = 1;
	int isPrime=1;
	for(i=2; i<x; i++)
	{
		if(x % i==0)
		{
			isPrime=0;
			break; 	
		}
	}
	if(isPrime==1){
		printf("%02d������\n",x);
		sum+=x;
	} 
}
	printf("1-100֮�ڵ���������%d",sum);
	return 0;
}
