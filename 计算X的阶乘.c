#include<stdio.h>
int main()
{
	long int fact=1;
	
	int x;
	int i=1;
	printf("请输入一个数字\n");
	scanf("%d",&x);
		
		
//	for( i=1; i<=x; i++){
//		fact*=i;
//	}

for(  i=x; i>1;  i--){
	fact*=i;
}

	printf("fact=%d",fact);
}
