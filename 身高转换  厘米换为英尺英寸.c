#include <stdio.h>
int main()
{
	printf("�����볤�ȣ����ף�");
	int centimetre;
	scanf("%d",&centimetre);
    int foot=centimetre/100.0/0.3048;
	int inch=((centimetre/30.48-foot)*12);
	printf("%dӢ�� %dӢ��",foot,inch);
	
 } 
