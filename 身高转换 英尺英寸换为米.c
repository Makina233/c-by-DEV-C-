#include <stdio.h>

int main()
{
	printf("请输入身高的英尺和英寸，例如5 7表示5英尺7英寸");
 
	double feet; 
	double inch;
	scanf("%lf %lf",&feet,&inch);
	printf("身高是%f米",(feet+inch/12)*0.3048);
	return 0; 
	
}
 
