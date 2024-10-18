#include<stdio.h>
#include<math.h>

//求体积 
/*
const float pi = 3.14;

float Vcube(int a);
float Vcylinder(int h,int r);
float Vsphere(int r);


float Vcube(int a)
{
	float v=a*a*a;
	return v;
}

float Vcylinder(int h,int r)
{
	float v=pi*r*r*h;
	return v;
}

float Vsphere(int r)
{
	float v=(4/3.0)*pi*r*r*r;
	return v;
}


int main()
{
	int de,r,a,h;
	printf("请输入 1 or 2 or 3 来选择计算立方体、圆柱体、球体的体积：\n");
	scanf("%d",&de);
	
	switch (de)
	{
		case 1:
			printf("请输入正方体边长 a 。\n"); 
			scanf("%d",&a);
			printf("V=%.2f",Vcube(a));
			break;
		case 2:
			printf("请输入圆柱体高度 h 和半径 r 。\n");
			scanf("%d %d",&h,&r);
			printf("V=%.2f",Vcylinder(h,r));
			break;
		case 3:
			printf("请输入球体的半径 r 。\n") ;
			scanf("%d",&r);
			printf("V=%.2f",Vsphere(r));
			break;
		default:
			printf("你输入有误！");
	}
	
	return 0;
	
 } 
*/

/*
double cal_power(int x,int n);

double cal_power(int x,int n)  //计算x的n次幂 
{
	int i,t;
	double ret=x;
	for(i=1;i<n;i++)
	{
		ret*=x;
	}
	return ret;
 } 

int main()
{
	int x,n;
	double s=0;
	scanf("%d %d",&x,&n);
	int i;
	for(i=1;i<=n;i++)
	{
		s+=1/cal_power(x,i);
	}
	printf("result=%f",s);
}
*/


/*
double f(int n);

double f(int n)
{
	int i;
	double sum=0;
	for(i=n;i<=(2*n-1);i++)
	{
		sum+=i;
	}
	return sum;
}

int main()
{
	int n;
	scanf("%d",&n);
	double s=0;
	int i;
	for(i=1;i<=n;i++)
	{
		s+=1/f(i);
	}
	printf("result=%lf",s);
}
*/

double fact(int n)   //计算n！ 
{
	int i; 
	double sum=1;
	for(i=1;i<=n;i++)
	{
		sum*=i;
	}
	return sum;
}


double cal(int k,int n)//计算组合数 
{
	double ret;
	ret=fact(n)/(fact(n-k)*fact(k));
	return ret;
}
int main()
{
	int n;
	printf("input n:");
	scanf("%d",&n);
	int k;
	for(k=1;k<=n;k++)
	{
		printf("cal(%d,%d)=%.0lf\n",k,n,cal(k,n));
	}
	return 0;
}














