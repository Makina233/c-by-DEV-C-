#include <stdio.h>
int main()
{
	printf("请输入当前时间(4位数)和经过时间\n"); 
	int a;
	int b;
	scanf("%d %d",&a,&b);
	int c=("a/100*60+a%100+b");
	printf("%d",c/60*100+c%100);


}
