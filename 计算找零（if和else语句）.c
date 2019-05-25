#include<stdio.h>
#include<stdlib.h>
int main()
{
	int price=0,bill=0;
	printf("请输入金额及票面\n");
	scanf("%d %d",&price,&bill);
	if(bill>=price)
	
	printf("找零%d元",bill-price);
	
	else
		printf("您的票面不足。");
	return 0;

 } 
