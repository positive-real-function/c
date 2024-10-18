#include<stdio.h>
#include<math.h>

int prefectnumber(int number) //输入一个数number判断它是不是完美数 
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
	printf("请输入你需要判断的数："); 
	scanf("%d",&n);
	printf("%d",prefectnumber(n));
}
*/

int main()  //打印10000以内的完美数 
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


