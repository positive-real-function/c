
//1.高位到低位输出各位数字
/* 
#include <stdio.h>
int  main( )
{  int digit, number, power, t;
   printf("Enter an integer:");
   scanf("%d", &number);
   number = number < 0 ? -number : number;
   power = 1;
    t=number;    //(1)       
   while(   t>=10      )//(2)
   { 
		power *= 10;
	   	t /= 10;
	};
	printf("The digits are:");
	while(  power>=1    )   //(3) 
	{    
	digit = number / power;
	printf("%d", digit);
    number%=power;   //(4) 
	power/=10;    
	}
}
*/

//查找并输出最高分
/* 
#include <stdio.h>
#define  MAXNUM  50
int  getmax(   int array[],int n     )
{   int  k, max;
      max=array[0]; 
    for(k = 1; k < n ; k ++)
       if(max < array[k])   max = array[k];
    return max;
}
void main()
{   int  k, x;
    int  mark[MAXNUM];
    printf("Enter  marks:");
    k = 0; 
    scanf("%d",&x);
    while(   k<MAXNUM&&x>=0&&x<=100 ){
   mark[k++] = x;
   scanf("%d",&x);
}
if(k > 0)  printf("Max = %d\n", getmax(mark,k));
else   printf("No  marks!\n");
} 
*/

//矩阵上三角问题、去边求和 
/* 
#include <stdio.h>
void main()
{   int  j, k, sum;
    int  a[4][4];
    printf("Enter  an  array:\n:");
for(j = 0; j <  4; j ++)
    for(k = 0; k<  4; k ++)
         scanf("%d", &a[j][k]);
sum = 0;
for(j = 0; j <  4; j ++)
    for(k = 0; k<  4; k ++)
         if( j != 3  &&  k != 3  &&  j != 0  &&  k != 0 )
		sum += a[j][k];
        printf("sum1 = %d\n", sum);
        ;      
		sum = 0;
for(j = 0; j <  4; j ++)
    for( k=j ;k<4 ; k ++)
         sum += a[j][k];
printf("sum2 = %d\n", sum);
} 
*/

/*
#include <stdio.h>
void main()
{   int  i ,  j,  k;
    int  a[4][4];
scanf("%d", &i);
j = k = 0;
if((i / 10) > 0 )     
    j = i;
if((i  != 0 )  &&  (j  ==  0)) 
    k = i;
else    
    k = -1;  //j=j/10;   
        printf("j = %d,  k = %d\n", j , k);
} 
*/



//全局变量和局部变量和静态局部变量
/* 
#include <stdio.h>
int   k = 1;
void  Fun();
void main()
{   int  j;
    for(j = 0; j < 2; j++)
        Fun();
    
	printf("k = %d", k);
} 
void Fun()
{   
	int k=1;      //第11行
	printf("k = %d,", k);
	k ++;
} 
*/




