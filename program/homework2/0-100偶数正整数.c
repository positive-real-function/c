#include<stdio.h>

void even_number1(int n)//���С�� n ��ż�������� 
{
	int i;
	for(i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d   ",i);
		}
	 } 
 } 
 
 void even_number2(int n)
 {
 	int i;
 	for(i=2;i<=n;i=i+2)
 	{
 		printf("%d   ",i);
	 }
 }
 
 
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	even_number1(n);
 	printf("\n");
 	even_number2(n);
 	return 0;
 }
 
 
