#include <stdio.h>
#include<stdio.h>
/* 
int main(void)
{
    int x,y;
    scanf("%d",&x);
    y=x*x;
    printf("%d=%d*%d\n", y,x,x);  //输出
    printf("%d*%d=%d\n", x,x,y); 
    return 0;
}
*/


float main(void)
{
	float fahr,celsius;
	printf("输入华氏度："); 
	scanf("%f",&fahr);
	celsius=5*(fahr-32)/9;
	printf("华氏度fahr = %.2f, 摄氏度celsius = %.2f",fahr,celsius);
	return 0;
}


//math=87，eng=72，comp=93，average=84
/*
int main(void)
{
	int math=87,eng=93,comp=84,average;
	average=(87+93+84)/3;
	printf("math=%d,eng=%d,comp=%d,average=%d",math,eng,comp,average);
	return 0;		
}
*/
/*
char main (void)
{
	char c1='C',c2='h',c3='i',c4='n',c5='a';
	printf("%c%c%c%c%c",c1+5,c2+5,c3+5,c4+5,c5+5);
	return 0;
}
*/
