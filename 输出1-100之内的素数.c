#include<stdio.h>
int main()
{
	int x;

for(x=2; x<=100; x++){
	int i = 1;
	int isPrime=1;
	for(i=2; i<x; i++)
	{
		if(x % i==0){
			isPrime=0;
			break; 	
		}
			
	}
	if(isPrime==1){
		printf("%d������\n",x);
		
	} 
}
	
	return 0;
}
