#include<stdio.h>


struct stu {
	char name[8];
	char id[8];
	char garde[8];
};

struct stu students[100];

int main()
{
	int  i;
	for(i=0; i<1;  ++i){
		scanf("%s %s %s",students[i].id, students[i].name, students[i].garde);
		printf("%s %s %s\n", students[i].id, students[i].name, students[i].garde);
	}
	
	struct stu *P= &students[100];
	printf("%s",*P);
	
	
}
