#include<stdio.h>
int  main()
{
	int sum=0,num=0;
	int count = 0;
	
		while(num!=-1){
		printf("输入一个数字\n");
	    scanf("%d",&num);
		sum+=num;
		count++;
		}
		

	printf("平均数是%lf",1.0*(sum+1)/(count-1));
	return 0;
}
