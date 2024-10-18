#include<stdio.h>
#include<math.h>
#include<string.h>

float calculate_average(float a,float b)
{
	float ret;
	ret=(a+b)/2;
	return ret;
}


int main()
{
	float a,b;
	printf("请输入两个数：");
	scanf("%f %f",&a,&b);
	printf("result=%.2f",calculate_average(a,b));
	
	 return 0;
}


