#include<stdio.h>
int  main()
{
	int sum=0,num=0;
	int count = 0;
	
		while(num!=-1){
		printf("����һ������\n");
	    scanf("%d",&num);
		sum+=num;
		count++;
		}
		

	printf("ƽ������%lf",1.0*(sum+1)/(count-1));
	return 0;
}
