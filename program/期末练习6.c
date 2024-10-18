
//输出各位数之和及位数
/* 
#include <stdio.h>
main()
{  int count =0,in,sum=0;
   scanf("%d",&in);
   if( in<0 )  in=-in;
   do {
        sum= sum+in % 10 ;
        in = in/10  ;
        count++;
   }while (in !=0);
   printf("sum=%d,count=%d\n",sum,count);
}
*/
//素数
/* 
#include <stdio.h>
#include <math.h>
main()
{  int i; int isprime(int m);
   for(i =50; i<=70;i++)
     if( isprime(i) != 0)
       printf("%d",i);
 }

int isprime(int m)
{
  int i,k;
   if(m == 1) return 0; 
  k=(int)sqrt((double)m);
  for(i =2; i<=k;i++)
     if( m%i == 0 )return 0;
   return 1; 
} 
*/
/*
void swap(int *x,int *y)
{
  int t;
    t=*x , *x=*y,   *y=t  ;
}

main()
{
  int i,index, a[10];
  
  for(i=0;i<6;i++)
     scanf("%d",&a[i]);
   index =0 ;
  for(i=0;i<6;i++)
    if (a[index] > a[i])
      index =i ;
    swap(&a[index],&a[5]);
   for(i=0;i<6;i++)
         printf("%d  ",a[i]);
    printf("\n");
}
*/

/*
#include <stdio.h>
#define T(c)  (((c) >='0' &&((c)<'9') ?(c)-'0':-1)
void f1(char ch)
{
    switch(ch){
	case '0':printf("0");
        case '1':printf("1");
	case '2':printf("2");break;
	case '3':printf("3");
	default:printf("9");
    }
    printf("\n");
}
double f2()
{  return (double)(5/2);
}
double f3(int n)
{  if(n==1)return 1.0;
   else return 1.0+1.0/f3(n-1);
}
main()
{  
   f1('1');
   printf("%.1f\n",f2());
   printf("%.3f\n",f3(4));
}
*/

/*
#include <stdio.h>
main()
{
  int i,j,t,a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
  for(i=0;i<3;i++)
     for(j=0;j<=i/2;j++){
       t=a[i][j],a[i][j]=a[i][3-j],a[i][3-j]=t;
     }
  printf("%d\n",a[0][1]);
  printf("%d\n",a[2][2]);
}

*/
#include <stdio.h>
main()
{
  char str[10]="27";
  int i,number=0;
  for(i=0;str[i]!='\0';i++)
    if(str[i] >= '0' &&   str[i] <= '7')
       number=number*8 +str[i] - '0';
  printf("%d\n",number);
  for(i=0;str[i]!='\0';i++)
    if(str[i] >= '0' &&   str[i] <= '5')
       number=number*6 +str[i] - '0';
  printf("%d\n",number);
}


