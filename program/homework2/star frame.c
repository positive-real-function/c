#include<stdio.h>
 //���һ�����ǿ� 
int main()
{
	int l,c;
	printf("������������������"); 
	scanf("%d %d",&l,&c);
	int i;
	for(i=1;i<=c;i++)
	{
		printf("* ");
		if(i==c)
		{
			printf("\n");
		}
	}
	
	for(i=1;i<=(l-2);i++)
	{
		int j;
		for(j=1;j<=c;j++)
		{
			if(j==1||j==(c-1))
			{
				printf("* ");
			}
			
			if(j!=1||j!=(c-1))
			{
				printf("  ");
			}
			if(j==c)
			{
				printf("\n");
			}
		}
	}
	
	for(i=1;i<=c;i++)
		{
			printf("* ");
		}
		
	return 0;
	
 } 
 
 
 

