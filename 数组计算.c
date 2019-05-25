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
	printf("请输入一个数字\n");
	scanf("%d",&x);
	loc=search(x, sizeof(a)/sizeof(a[0]), a);
	if(loc==-1)
	{
		printf("数组中没有%d\n",x);
	}else
	{
		printf("%d在a中是在%d位置\n",x,loc);
		
	}return  0;
}

//数组作为函数的参数时，往往还要再用另一个参数来传入数组的大小 ，在这里的函数中就用了length来传入了a[]的大小 




