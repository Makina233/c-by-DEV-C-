#include<stdio.h>
int search(int key, int length, int a[ ]){
	int ret=-1;
	int i;
	for(i=0; i<length; i++){
		if(a[i]==key){
			ret=i;
			break;
		}
	}return ret;
}

int main(void)
{
	int a[]={2,4,6,8,4,56,42,5645,14,556,33,6661,};
	int x;
	int loc;
	printf("������һ������\n");
	scanf("%d",&x);
	loc=search(x, sizeof(a)/sizeof(a[0]), a);
	if(loc==-1)
	{
		printf("������û��%d\n",x);
	}else
	{
		printf("%d��a������%dλ��\n",x,loc);
		
	}return  0;
}

//������Ϊ�����Ĳ���ʱ��������Ҫ������һ����������������Ĵ�С ��������ĺ����о�����length��������a[]�Ĵ�С 




