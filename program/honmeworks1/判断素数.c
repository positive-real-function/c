#include<stdio.h>
#include<math.h>
int prime(int number)
{
	int i=2;
	int flag=1;
	if(number<2)
	{
		flag=0;	
	}
	else
	{
		for(i=2;i<number;i++)
		{
			if(number%i==0)
			{
				flag=0;
			}
		
		}
	}
	
	return flag;	
}


 int main()
{
 	int number,flag,result;
 	scanf("%d",&number);
 	result=prime(number);
 	printf("%d",result);
} 
  
//int main()
//{
//	int result;
//	int i=1,sum=0;
//	while(sum<=100)
//	{
//		i++;
//		result=prime(i);
//		if(result==1)
//		{
//			sum++;
//			printf("%d  ",i);
//		}
//	}
//		
//}
  
