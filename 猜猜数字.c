#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
int main()
{
	srand(time(0));
	int number=rand()%10+1;
	int count;
	int a=0;
	printf("���Ѿ������һ��1��10���ڵ���\n");
	do {
		
		printf("��²�������Ƕ��٣�");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("��µ����ִ���\n");
			}  else if(a<number){
				printf("��µ�����С��\n");
			}	 
	}
	while(a=number);
	printf("������%d�ξͲ�����",count);

	
 } 
