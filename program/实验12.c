#include<stdio.h>
#include<math.h>


int main()
{
	//累加a字符串中各个字符的ASCII码值，然后将累加和以格式"%d"输出
	char *a="r235%^%34cdDW,.";
	int sum=0;
	int i=0;
	while(a[i]!='\0')
	{
		//方法一： 
	
		printf("%c",a[i]);
		printf("%d\n",a[i]);
		sum+=a[i];
		i++;
		
		
		//方法二：
		//printf("%d\n",*a++); 
		*a++;
		sum+=*a;  
	}
	printf("sum=%d",sum);
}


/*
int main()
{
	char s[]="we45*&y3r#$1";
	int len=sizeof(s)/sizeof(s[0])-1;
	int ret[len];
	int i;
	while(s[i]!='\0')
	{
		ret[i]=(i+1)*s[i];
		i++;
	}
	
	for(i=0;i<len;i++)
	{
		printf("a[%d]=%d\n",i+1,ret[i]);
	}
	
}
*/
/*
float f(float *x);
int main()
{
	float x=1.7;
	f(&x);
	printf("result=%f",x);
}

float f (float *x)
{
	*x=(1.1+2.2**x+3.3**x**x+4.4**x**x**x+5.5**x**x**x**x);
}
*/

/*
void f1(int ,int),f2(int*,int*),f3(int*,int*);

int main()
{
	int a=-1,b=1;
	f1(a,b);
	printf("(%d,%d)\n",a,b);
	a=-1,b=1;
	f2(&a,&b);
	printf("(%d,%d)\n",a,b);
	a=-1,b=1;
	f3(&a,&b);
	printf("(%d,%d)\n",a,b);
			
}

void f1(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
}

void f2(int*x,int*y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}

void f3(int *x,int *y)
{
	int *t;
	t=x;
	x=y;
	y=t;
}
*/

















