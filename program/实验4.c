#include<stdio.h>
#include<math.h>
#define pi 3.1415
/*
int main()
{
	
	float length;
	printf("please input the length of Regtangle:");
	scanf("%f",&length);
	printf("%.2f",(pi*(length/2)*(length/2))/(length*length));
	return 0;
	
} 
*/
/*
int main()
{
	int a,sum;
	printf("����һ����λ����");
	scanf("%d",&a);
	sum=a%10+a/10%10+a/100;
	printf("�����λ���ĸ�λ��ʮλ����λ��֮��Ϊ��%d",sum);
	return 0;
	
}
*/

int main()
{
  int num,a,b,c;
  printf("����һ����λ����");
  scanf("%d",&num);
  a=num%10;
  b=num/10%10;
  c=num/100;
  printf("�������������Ϊ��%d",a*100+b*10+c);
  return 0; 	
}


