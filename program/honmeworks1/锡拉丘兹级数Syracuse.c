#include<stdio.h>
#include<math.h>

int main()
{
	int number,t,n=0;
	printf("请输入一个大于0的整数：");
	scanf("%d",&number);
	
	t=number;
	
	do
	{
		printf("U%d=%d\n",n,t);
		n++;
		
		if(t%2==0)
		{
			t=t/2;
		}
		else
		{
			t=t*3+1;
		}
		
	}while(t!=1);
	printf("U%d=%d",n,t);
}

