#include<stdio.h>
#include<conio.h> 
int main()
{
	char A[100]={0,0,}, a, N;
	int i;
	
	for(i=0; i<100 ; i++)
	{
		a=getch();//ֱ�Ӷ�ȡһ���ַ������ûس� 
		A[i]=a;
		if(a=='\r')//�������س����˳�ѭ�� 
		break;
		printf("%c",A[i]);
	}
	printf("\n");
	
	int sum=0;
	for(i=0;i<100;i++)
	{
		if(A[i]=='1')
		{
			sum+=1;
		}
	}
	printf("%d",sum);	
	
	return 0;
}
