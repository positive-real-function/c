#include<stdio.h>
#include<math.h>
#include<string.h>

float F(int x)
{
	if(x>=1||x<=10)
	{
		float result=sin(x)+log(x)+sqrt(x);
		return result;
	}
	else
	{
		printf("����� x ���ڶ������ڣ�"); 
	}
 } 
 
 int main()
 {
 	int x;
 	scanf("%d",&x);
 	printf("%.2f",F(x));
  } 
 
 
