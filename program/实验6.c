#include <stdio.h>
#include<math.h> 
/*
int main(void)
{   char sign;
    int x,y; 
 	printf("����x ����� y��");
 	scanf("%d%c%d", &x, &sign, &y);
 	if(sign=='*'||sign=='%'||sign=='/')
	 {
 		if (sign=='*')
		{
	 		printf("%d * %d = %d\n",x,y,x*y);
	 	}
		else if (sign=='/')
		{
			if(y==0)
			{
				printf("����Ϊ�㣬û�����壡");	
			}
	 		else 
			{
			 	printf("%d / %d = %d\n",x,y,x/y);
			}
	 	}
		else if (sign=='%')
		{
			printf("%d%%%d = %d\n",x,y,x%y);
		}
		else
		{
			printf("������������\n");
		}	
	 }
	 else{
	 	printf("������������Ϊ�Ƿ���������������룡"); 
	 }	
}
*/
/*
int main()
{
	char sign;
    int x,y; 
 	printf("����x ����� y��");
 	scanf("%d%c%d", &x, &sign, &y);
 	switch(sign)
 	{
 		case '*':
 			printf("%d * %d = %d\n",x,y,x*y);
 			break;
 		case '/':
 			if(y==0)
			{
				printf("����Ϊ�㣬û�����壡");	
			}
	 		else 
			{
			 	printf("%d / %d = %d\n",x,y,x/y);
			}
 			break;
 		case '%':
 			printf("%d%%%d = %d\n",x,y,x%y);
 			break;
 		default :
 			printf("I can't do it ��"); 	
	 }
	return 0;
}
*/
/*
int main ()
{
	float salary,tax,rate;
	printf("Enter the salary��");
	scanf("%f",&salary);
	if(salary<=850)
	{
		rate=0;
	}
	else if(salary>850&&salary<=1350)
	{
		rate=0.05;
	}
	else if(salary>1350&&salary<=2850)
	{
		rate=0.10;
	}
	else if(salary>2850&&salary<=5850)
	{
		rate=0.15;
	}
	else
	{
		rate=0.20;
	}
	tax=rate*(salary-850);
	printf("tax=%.2f",tax);
	return 0;	
}
*/

   
int main() 
{ 
	int year,month;
	printf("Input year,month:"); 
	scanf("%d,%d",&year,&month); 
	switch (month) 
	{ 
	case 1: 
	case 3:
	case 5: 
	case 7: 
	case 8: 
	case 10:
	case 12:
		printf("31 days\n");
		break; 
	case 4:
	case 6:
	case 9: 
	case 11:
		printf ("30 days\n");
		break;
	case 2:
		if ((year%4==0 && year % 100 !=0)||(year % 400== 0)) 
			printf ("29 days\n"); //�����2����29��
		else 
			printf("28 days\n"); //ƽ���2����28��
			break; 
	default:printf ("Input error!\n"); 
	} 
} 



