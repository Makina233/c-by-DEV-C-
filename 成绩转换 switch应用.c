#include<stdio.h>
int main(){
	int garde;
printf("«Î ‰»Î≥…º®\n");
scanf("%d",&garde);
switch (garde/10)
{
	case 10:
	case  9:
		printf("A");
	break;
	case  8:
		printf("B");
	break;
	case  7:
		printf("C");
	case  6:
		printf("D");
	break;
	default:
		printf("E");
}
return 0;
}

