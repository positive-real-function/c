//6-20偶数能用两个素数之和表示 
/*
#include <stdio.H>
#include <math.h>
int prime(int m)
{
	int i,n;
	if(m==1)return 0;
	n=sqrt(m);
	for(i=2;i<=n;i++)
	if(m%i==0)return 0;
	return 1;
}

int main()
{ 
	int count,i,number;
	count=0;
	for(number=6;number<=20;number=number+2)
	{
		for(i=3;i<=number/2;i=i+2)
		if(prime(i)!=0&&prime(number-i)!=0)
		{
			printf("%d=%d+%d ",number,i,number-i);
			count++;
			if(count%5==0 )printf("\n");
			break;  
		}
	}
}
*/

//统计数字、英文、符号字符
/* 
#include <stdio.h>
void count(char *s,int *digit,int *letter,int *other)
{     *digit=*letter=*other=0;     
    while( *s!='\0')
    {if(*s>='0'&&*s<='9')
        (*digit)++;
      else if(*s>='a'&&*s<='z'||*s>='A'&&*s<='Z')
               (*letter)++;
            else
              (*other)++;
       s++;
    }
}
main()
{int i=0,digit,letter,other;
char ch,str[80];
printf("Enter charaters:");
ch=getchar();
while(ch!= '\n' )
{str[i]=ch;
i++;
ch=getchar();
}
str[i]='\0';
  count(str,&digit,&letter,&other)    ;
    printf("Digit=%d Letter=%d Other=%d\n",digit,letter,other);
}
*/

#include <stdio.h>
main()
{int flag=0,i;
int a[7]={8,9,7,9,8,9,7};
for(i=0;i<7;i++)
if(a[i]==7)
{flag=i;
break;
}
printf("%d\n",flag);
flag=-1;
for(i=6;i>=0;i--)
  if(a[i]==8)
   {break;
    flag-i;
   }
 printf("%d\n",flag);
flag=0;
for(i=0;i<7;i++)
  if(a[i]==9){
      printf("%d ",i);
  }
  printf("\n");
  flag=0;
  for(i=0;i<7;i++)
    if(a[i]==7) flag=i;
  printf("%d\n",flag);
}
















