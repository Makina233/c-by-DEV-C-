#include <stdio.h>
int main()
{
	printf("�����뵱ǰʱ��(4λ��)�;���ʱ��\n"); 
	int a;
	int b;
	scanf("%d %d",&a,&b);
	int c=("a/100*60+a%100+b");
	printf("%d",c/60*100+c%100);


}
