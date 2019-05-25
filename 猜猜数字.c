#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
int main()
{
	srand(time(0));
	int number=rand()%10+1;
	int count;
	int a=0;
	printf("我已经想好了一个1到10以内的数\n");
	do {
		
		printf("请猜猜这个数是多少：");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("你猜的数字大了\n");
			}  else if(a<number){
				printf("你猜的数字小了\n");
			}	 
	}
	while(a=number);
	printf("你用了%d次就猜中了",count);

	
 } 
