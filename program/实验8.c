#include<stdio.h>

//�׳� 
/*
int main()
{
	int sum=0,n,s;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			s*=j;
		}
		sum += s;
		s=1;
	}
	printf("%d",sum);
}
*/

//3+33+333+...=?
/*
int main()
{
	int i,n,s=0,t,sum=0;
	printf("��������Ҫ��͵����ֺ�������");
	scanf("%d %d",&t,&n);
	for(i=1;i<=n;i++)
	{
		s=10*s+t;
		sum=sum+s;
			
	}
	printf("���Ϊ��%d",sum);
 } 
*/

//���s=1!+3!+5!+��+(2n-1)!
/*
int main()
{
	int sum=0,n,s;
	scanf("%d",&n); //nΪ���� 
	int i,j;
	for(i=1;i<=2*n-1;i=i+2)
	{
		for(j=1;j<=i;j++)
		{
			s*=j;
		}
		sum += s;
		s=1;
	}
	printf("%d",sum);
}
*/

//��һ���У�2/1��3/2��5/3��8/5�������������е�ǰ10��֮�͡�
/*
int main()
{
	int a,b,c,i;
	double sum;
	for(a=b=1,sum=i=0;i<10;i++)
	{
		c=a+b;
		b=a;
		a=c;
		sum+=(double)c/b;
	}
	
	printf("The result is %.2lf\n",sum);
}
*/



//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������100֮�ڵ�����������
/*
int main()
{
	int i,j,sum=0;
	for (i=1;i<100;i++)
	{
		for(j=1;j<i/2+1;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		
		if(sum==i)
		{
			printf("%d\n",i);
		}
		sum=0;
	}
}
*/







