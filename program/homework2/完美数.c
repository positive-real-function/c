#include<stdio.h>
#include<math.h>

int prefectnumber(int number) //����һ����number�ж����ǲ��������� 
{
	int j,sum=0;
	
	for(j=1;j<number/2+1;j++)
	{
		if(number%j==0)
		{
			sum=sum+j;
		}
	}
		
	if(sum==number)
	{
		return 1;
	}

	return 0;
}

/*
int main()
{
	int n;
	printf("����������Ҫ�жϵ�����"); 
	scanf("%d",&n);
	printf("%d",prefectnumber(n));
}
*/

int main()  //��ӡ10000���ڵ������� 
{
	int i;
	for(i=1;i<=10000;i++)
	{
		if(prefectnumber(i))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}


