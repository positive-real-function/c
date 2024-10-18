#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,delta;
	printf("请输入a b c:");
	scanf("%lf %lf %lf",&a,&b,&c);
	delta=b*b-4*a*c;
	if(0==a&&0==b&&0==c)
	{
		printf("This equation is meaningless");		
	}
	if(a==0&&b==0&&c!=0)
	{
		printf("This equation is woring");	
	}
	if(a==0&&b!=0&&c!=0)
	{
		printf("x=%.2f\n",-c/b);
	}
	if(a!=0&&b!=0&&c!=0)	
	{
		if(delta>=0)
		{
			printf("x1=%.2f\n",((-b)+sqrt(delta))/(2*a));
			printf("x2=%.2f\n",((-b)-sqrt(delta))/(2*a));
			}
		else{
			printf("This equation has no solution");
		}	
	}
	return 0;	
}


/*
int main()
{
	float n1,n2,n3;
	float max=0;
	printf("please input three numbers:");
	scanf("%f %f %f",&n1,&n2,&n3);
	max=n1;
	if(n2>max)
	{
		max=n2;
	}
	if(n3>max)
	{
		max=n3;
	}
	printf("%.2f",max);	
}
*/


/*
void swap(float* arr, int len);
void print(float* arr, int len);

 void swap(float* arr, int len)
{
	int i;
	for(i = 0; i < len - 1; i++)
	{
		int j;
		for (j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) 
			{
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			}
		}
	}
}

void print(float* arr, int len)
{
	int i;
	printf("排序后的数列为："); 
	for(i=0;i<len;i++)
	{
	printf("%.2f  ",arr[i]); 
	}
}


int main()
{
	float a,b,c,d,e,f;
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	float arr[]={a,b,c,d,e};
	int i;
	float max=0;
	int len = sizeof(arr) / sizeof(arr[0]);
    swap(arr, len);
    print(arr,len);
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\nThe max number is:%.2f",max);
	return 0;
}
*/
/*
int main()
{
	float a,b,c,area,perimeter,s;
	printf("Enter 3 sides of the triangle:");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2.00;
	if(a+b>=c&&b+c>=a&&a+c>=b)
	{
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		perimeter=a+b+c;
		printf("Area=%.2f,Perimeter=%.2f",area,perimeter);
	 } 
	 else
	 {
	 	printf("These sides do not correspond to a valid triangle");
	 }
	 return 0;
}
*/



