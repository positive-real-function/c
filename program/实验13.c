#include<stdio.h>
#include<math.h>


//����1
//��������ʱ��������n�������n�ĸ�λ����֮�͡����磺����n=1308�������12��n=-3204�������9��
/*
int main()
{
	int n;
	scanf("%d",&n);
	n=n<0?-n:n;
	
	int i,sum=0;
	do
	{
		sum+=n%10;
		n=n/10;
	}while(n!=0);
	
	printf("sum=%d",sum);
	
	return 0;
}
*/

//����2 
//��������ʱ����n,���n�������������ӡ����磺����nΪ60�������60=2*2*3*5
//����һ��while�� 
/* 
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=",n);
	
	int i=2;
	while(n>1)
	{
		if(n%i==0)
		{
			printf("%d*",i);
			n=n/i;
		}
		else
		{
			i++;	
		}
	 } 
	printf("\b  ");
 } 
*/

//��������for��
/*
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=",n);
	
	int i;
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			printf("%d*",i);
			n=n/i;
		}
	}
	printf("\b  ");
	return 0;
 } 
*/


//������ 
//��������ʱ��������a��n�ֱ�Ϊ3,6����������б��ʽ��ֵ��3+33+333+3333+33333+333333 
/*
int main()
{
	int a,n;
	scanf("%d %d",&a,&n);
	
	int s=0,sum=0;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			s*=10;
			s+=a;
		}
		sum+=s;
		s=0;
	}
	printf("%d",sum);
}
*/

//������ 
//��ʾ���������У���ֵ��ͬ��Ԫ�ء�
/*
int main()
{
	int a[]={1,3,5,7,9,11};
	int b[]={2,5,7,9,12,16,3};
	
	int lena=sizeof(a)/sizeof(a[0]);
	int lenb=sizeof(b)/sizeof(b[0]);
	
	int i,j;
	for(i=0;i<lena;i++)
	{
		for(j=0;j<lenb;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d\n",a[i]);
			}
		}
	}
}
*/


#define no answer
//����5�� �������
//��x=0.0��0.5��1.0��1.5��2.0������10.0����f(x)=x2-5.5*x+sin(x)�����ֵ��Դ�����д����Ƶĳ���


#include <stdio.h>
#include <math.h>
#define f(x) x*x-5.5*x+sin(x)
/*
void main()
{  

	float x,max;
	max=0;
	for(x=0.5;x<=10;x+=0.5)
	if(f(x)>max) max=f(x);
	printf("%f\n",max);
}
*/




//����6���������
//����m��n��Ҫ���������������0����������ǵ����Լ����
//Դ�����д����Ƶĳ���
/*
#include <stdio.h>
void main()
{  int m,n;
   while(1) 
   {
	    scanf("%d%d",&m,&n);
	    if(m>0 && n>0)break;
   }
   int k=m<n?m:n;
   while( m%k!=0 || n%k!=0) k--;
   printf("%d\n",k);
}
*/


//����� 
//ѭ���������ɸ���������Ctrl+z����ѭ���������ÿ������λ�������磺
/*
#include <stdio.h>

void main()
{  int n,m,k;
   while(scanf("%d",&n)!=EOF) 
   {
	 m=n;k=0;
     while(m!=0)
	 {
    	k++;
		m=m/10;
	 }
     printf("%d��%dλ����\n",n,k);
   }
}
*/



//����9��
//����10����������a�У����㲢��ʾ����Ԫ�ص�ƽ��ֵ���Լ�������ƽ��ֵ�����С������Ԫ��ֵ��
//Դ�����д����Ƶĳ���

/*
#include <stdio.h>
#include <math.h> 
void main()
{ 
	double a[10],v=0,x,d; int i;
	printf("Input 10 numbers:  ");
	  for(i=0;i<10;i++) 
	  {
		scanf("%lf", &a[i]);
		v=v+a[i]/10;
	  }
	  d=1000000000; x=a[0];
	  for(i=1;i<10;i++)
		 if(fabs(a[i]-v)<d) d=fabs(a[i]-v),x=a[i];
	  printf("%.4f   %.4f\n",v,x);
}  
*/












//����11��
//����x��ԭ������Ϊ��1��-2��3��4��-5��6��-7�����ú���f������x������Ϊ��1��3��4��6��0��0��0��������Ϊ��1  3  4  6��
//Դ�����д����Ƶĳ���
/*
#include <stdio.h>
void f(int *a,int *m)
{ int i,j;
  for(i=0;i<*m; )
    if(a[i]<0) {
      for(j=i;j<*m-1;j++) a[j]=a[j-1];
      a[*m-1]=0; (*m)--;
	}
	else i++;
}
void main()
{ int i,n=7,x[7]={1,-2,3,4,-5,6,-7};
  f(x,&n);
  for(i=0;i<n;i++) printf("%5d",x[i]);
  printf("\n");
}  

*/





















































 
