#include<stdio.h>
#include<math.h>


//任务1
//程序运行时输入整数n，则输出n的各位数字之和。例如：输入n=1308，则输出12；n=-3204，则输出9。
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

//任务2 
//程序运行时输入n,输出n的所有质数因子。例如：输入n为60，则输出60=2*2*3*5
//方法一（while） 
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

//方法二（for）
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


//任务三 
//程序运行时，若输入a，n分别为3,6，则输出下列表达式的值：3+33+333+3333+33333+333333 
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

//任务四 
//显示两个数组中，数值相同的元素。
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
//任务5： 程序填空
//对x=0.0，0.5，1.0，1.5，2.0，…，10.0，求f(x)=x2-5.5*x+sin(x)的最大值。源程序（有待完善的程序）


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




//任务6：程序填空
//输入m、n（要求输入的数均大于0），输出它们的最大公约数。
//源程序（有待完善的程序）
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


//任务八 
//循环输入若干个整数（以Ctrl+z结束循环），输出每个数的位数。例如：
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
     printf("%d是%d位整数\n",n,k);
   }
}
*/



//任务9：
//输入10个数到数组a中，计算并显示所有元素的平均值，以及其中与平均值相差最小的数组元素值。
//源程序（有待完善的程序）

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












//任务11：
//数组x中原有数据为：1、-2、3、4、-5、6、-7，调用函数f后数组x中数据为：1、3、4、6、0、0、0，输出结果为：1  3  4  6。
//源程序（有待完善的程序）
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





















































 
