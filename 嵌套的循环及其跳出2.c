#include<stdio.h>
int main()
{
	int x;
	printf("请输入金额\n");
	scanf("%d",&x);
	int one,two,five;
	for(one=1; one<x*10; one++){
		for(two=1; two<x*10/2; two++){
			for(five=1; five<x*10/5; five++){
				if(one*1+two*2+five*5==x*10){
					printf("可以用%d个一角和%d个两角和%d个五角可以组成%d元\n",one,two,five,x); 
					goto out;
				}
			}
		}
	}
 out:
	return 0;
}

