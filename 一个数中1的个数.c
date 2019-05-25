#include<stdio.h>
#include<conio.h> 
int main()
{
	char A[100]={0,0,}, a, N;
	int i;
	
	for(i=0; i<100 ; i++)
	{
		a=getch();//直接读取一个字符而不用回车 
		A[i]=a;
		if(a=='\r')//即读到回车就退出循环 
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
