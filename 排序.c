//����һ��������N������������Nλ����������С����˳������
#include<stdio.h>
void main()
{
 int m;
 printf("������Ҫ�Ƚϵ����ĸ�����\n");
 scanf("%d",&m);
 int A[m] ;
 printf("������Ҫ�ȵ�����\n");
 int i;
 for( i=0 ; i<m ; i++)
 {
  scanf("%d",&A[i]);
 }
 for(i=0 ; i<m-1 ; i++)
 {
  int j;
  for( j=i+1 ; j<m ; j++)
  {
   if(A[j] < A[i])
   {
    int c;
    c=A[j];
    A[j]=A[i];
    A[i]=c;
   }
  }
 }
 printf("�����Ϊ��\n");
 for(i=0;i<m;i++){
  printf("%d  ",A[i]);
 }
 printf("\n");
}

