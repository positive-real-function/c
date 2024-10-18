#include<stdio.h>
#include<math.h>
#include<string.h>

#define N 100


/*
int main()
{
	int a[6]={1,3,5,7,9,11} ;
	int b[7]={2,5,7,9,12,16,3};
	
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<7;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d  ",a[i]);
			}
		}
	}
	
	return 0;	
}
*/

/*
int main()
{
	float arr[10];
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%f",&arr[i]);
	}
	
	double sum=0;
	int cnt=0;
	
	for(i=0;i<10;i++)
	{
		sum+=arr[i];
		cnt++;
	}
	
	float average=sum/cnt;
	printf("%.4f  ",average);
	
	float min=fabs(arr[0]);
	for(i=1;i<10;i++)
	{
		if(fabs(arr[i]-average)<min)
		{
			min=arr[i];
		}
	}
	printf("%.4f",min);
	
	return 0;	
}
*/

/*
int main()
{
	double x[5]={-1.5,2.1,6.3,3.2,-0.7};
	double y[5]={7,5.1,3.2,4.5,7.6};
	
	int i,j;
	double ret,sum=0;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			ret= sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
			sum+=ret;
		}
	
	}
	printf("%lf",sum);
	
	return 0;
}
*/

/*
int main()
{
	double arr[40];
	
	int i;
	arr[0]=1;
	arr[1]=1;
	
	for(i=2;i<40;i++)
	{
		arr[i]=arr[i-2]+arr[i-1];
	}
	
	double sum=0;
	for(i=0;i<40;i++)
	{
		sum+=arr[i];
	}
	
	printf("%.0lf",sum);
	
	return 0;
}
*/

/*
int main()
{
	double x[10]={1.1,3.2,-2.5,5.67,3.42,-4.5,2.54,5.6,0.97,4.65};
	double y[10]={-6,4.3,4.5,3.67,2.42,2.54,5.6,-0.97,4.65,-3.33};
	
	int i,j;
	double distance;
	
	double min=sqrt(pow((x[1]-x[2]),2)+pow((y[1]-y[2]),2));
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			distance= sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
			printf("%.2lf\n",distance); 
			if(distance<min)
			{
				min=distance;
			}
		}
	
	}
	
	printf("%lf",min);
}
*/

/*
int main()
{
	int a[]={5,4,3,2,1,9,8,7,6,0};
	
	int length=sizeof(a)/sizeof(a[0]);
	
	int i,j,t;
	printf("ÅÅÐòÇ°:  ");
	
	for(i=0;i<length;i++)
	{
		printf("%d  ",a[i]);
	}
	
	printf("\n");
	
	for(i=0;i<length-1;i++)
	{
		int k=i;
		for(j=i+1;j<length;j++)
		{
			if(a[j]<a[k])
			{
				k=j;
			}
		}
		if(i!=k)
		{
			t=a[i];
			a[i]=a[k];
			a[k]=t; 
		}
	}
	
	printf("ÅÅÐòºó£º "); 
	for(i=0;i<length;i++)
	{
		printf("%d  ",a[i]);
	}
	
	return 0;
}

*/











