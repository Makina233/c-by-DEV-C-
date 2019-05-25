#include <stdio.h>
int main()
{
	printf("请输入长度（厘米）");
	int centimetre;
	scanf("%d",&centimetre);
    int foot=centimetre/100.0/0.3048;
	int inch=((centimetre/30.48-foot)*12);
	printf("%d英尺 %d英寸",foot,inch);
	
 } 
