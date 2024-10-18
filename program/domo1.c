#include<stdio.h>
#include<math.h> 

 
 //int main(){
 
 	/*
	 // %d 输出后面内容
	 printf("23+56=%d\n",23+56);
 	
 	
	 int a,b,c;
    printf("请输入数值a:");
	 scanf("%d",&a);
	 printf("请输入数值b:"); 
	 scanf("%d",&b);
	 	c=a+b;
 	printf("%d\n",c);

 	
 	//sizeof输出字节大小
 	printf("%d\n",sizeof(int));  
	 
	 
	 /* 
	 //四则运算 a+b 
	 int a=123;
	 int b=234;
	 printf("%d\n",a+b);
	 */
	 
	 
	 //  ++i=i+1再输出  i++=输出i 再i+1 
	 /*
	 int a=3;
	 printf("%d\n",a++);
	 printf("%d\n",++a);
	 */ 
	 
	 
	 /*
	 float a 
	 (double)a  强行临时改变 a 类型 ,只对该行变量有效 
	 (int)x+y 
	 */
	 
	 
	 /*
	 int a = 12,b = -3456;
    long int c = 123456;
    printf("%5d\n",a);
    printf("%d\n",b);
    printf("%ld\n",c);
    printf("%7ld\n",c);
	 
	return 0;
 } 
 */
 
 
 //用 putchar() 函数输出一个字符
//一般形式：putchar(c); 功能：输出变量 c 所代表的一个字符； 说明：c 为字符型变量或整型变量。
/*
void main(){
	 char a,b,c;
    a = 'O';b = 'K';c = '\n';
    putchar(a);
    putchar(b);
    putchar(c);
}
*/




/*
用getchar函数输入一个字符 
一般形式：getchar();；
功能：要求用户从终端（键盘）输入单个字符；
说明：返回值为从输入设备上得到的字符。
*/


//输入一个大写字母，显示一个对应的小写字母
/*
 int main(){
    char c;
    printf("Input an uppercase letter:\n");
    c = getchar();
    putchar(c + 32);
    return 0;
} 
  */
  
  
  /*
  int main()
  {
  	char a;
  	printf("输入需翻译文本：\n");
  	a=getchar();
  	putchar(a+1);
  	return 0;
  }
  
  
  int main(){
    //初始化字符
    char str[9] ={'S','h','i','Y','a','n','L','o','u'};

    //字符加1
    for(int i=0;i<9;i++)
        str[i] += 1;

    //printf打印
    for(int i=0;i<9;i++)
        printf("%c",str[i]);

    printf("\n");

    //putchar打印
    for(int i=0;i<9;i++)
        putchar(str[i]);
    return 0;
}

*/
/* 
int main(){
    //初始化数据
    float r,PI;
    // 需要输入 r =2.5
    scanf("%f", &r);
    int h;
    // 需要输入 h =3
    scanf("%d", &h);
    float area,cir,vol;
    //计算
    cir = PI * r * 2;
    area = PI * r * r;
    vol = area * h;

    printf("cir=%.2f,area=%.2f,vol=%.2f",cir,area,vol);
    return 0;
}
*/
/*
#include<stdio.h>
void main()
{
    printf("zhe\nshi\nyi\ndao\nqian\ndao\nti");
    
}
*/
/*
#include<stdio.h>
int main(void)
{
    double x;
    scanf("%lf",&x);
    printf("%.3lf",x);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{int a,b;
 scanf("%d%d",&a,&b);
 printf("%d",a+b);
 return 0;
}
*/


//求阶乘的和 
/*
int main()
{
	int i,j,n;
	long sum,term;
	term=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=1;
		for(j=1;j<=i;j++)
		{
			sum=sum*j;
		}
		term=term+sum;
	}
	printf("%ld",term);
	return 0;
}
*/
/* 
int main()
{
    int i,n;
    int flag=1;
    for(i=1;i<=3;i++)
    {
        scanf("%d",n);
        if(n<60)
        {flag=0;}
    }
    if(flag)
    {printf("YES");}
    else{printf("NO");}
    return 0;
}
*/
/*
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		int sum=0;
		sum+=i;
		printf("%d\n",sum);	
	}
	return 0;
 } 
*/
/*
#include<stdio.h>
int main()
{
    printf("H\ne\nl\nl\n \nC\nC\nC\nC\n");
    return 0;
}
*/
/*
int main()
{
	float x;
	scanf("%f",&x);
	int y;
	y=(int)(x+0.5)>(int)x?(int)x+1:(int)x;
	printf("%d",y);
	return 0;
 } 
*/
int main() 
{
    float c,x;
    scanf("%f",&c);
    int Fahrenheit;
    x=9*c/5+32;
    printf("%.2f",x);
    return 0;
  	
}






