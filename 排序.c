//输入一个正整数N，将随后输入的N位正整数按从小到大顺序排列
#include<stdio.h>
void main()
{
 int m;
 printf("请输入要比较的数的个数：\n");
 scanf("%d",&m);
 int A[m] ;
 printf("请输入要比的数：\n");
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
 printf("排序后为：\n");
 for(i=0;i<m;i++){
  printf("%d  ",A[i]);
 }
 printf("\n");
}

