#include<stdio.h>
#include<math.h> 

 
 //int main(){
 
 	/*
	 // %d �����������
	 printf("23+56=%d\n",23+56);
 	
 	
	 int a,b,c;
    printf("��������ֵa:");
	 scanf("%d",&a);
	 printf("��������ֵb:"); 
	 scanf("%d",&b);
	 	c=a+b;
 	printf("%d\n",c);

 	
 	//sizeof����ֽڴ�С
 	printf("%d\n",sizeof(int));  
	 
	 
	 /* 
	 //�������� a+b 
	 int a=123;
	 int b=234;
	 printf("%d\n",a+b);
	 */
	 
	 
	 //  ++i=i+1�����  i++=���i ��i+1 
	 /*
	 int a=3;
	 printf("%d\n",a++);
	 printf("%d\n",++a);
	 */ 
	 
	 
	 /*
	 float a 
	 (double)a  ǿ����ʱ�ı� a ���� ,ֻ�Ը��б�����Ч 
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
 
 
 //�� putchar() �������һ���ַ�
//һ����ʽ��putchar(c); ���ܣ�������� c �������һ���ַ��� ˵����c Ϊ�ַ��ͱ��������ͱ�����
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
��getchar��������һ���ַ� 
һ����ʽ��getchar();��
���ܣ�Ҫ���û����նˣ����̣����뵥���ַ���
˵��������ֵΪ�������豸�ϵõ����ַ���
*/


//����һ����д��ĸ����ʾһ����Ӧ��Сд��ĸ
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
  	printf("�����跭���ı���\n");
  	a=getchar();
  	putchar(a+1);
  	return 0;
  }
  
  
  int main(){
    //��ʼ���ַ�
    char str[9] ={'S','h','i','Y','a','n','L','o','u'};

    //�ַ���1
    for(int i=0;i<9;i++)
        str[i] += 1;

    //printf��ӡ
    for(int i=0;i<9;i++)
        printf("%c",str[i]);

    printf("\n");

    //putchar��ӡ
    for(int i=0;i<9;i++)
        putchar(str[i]);
    return 0;
}

*/
/* 
int main(){
    //��ʼ������
    float r,PI;
    // ��Ҫ���� r =2.5
    scanf("%f", &r);
    int h;
    // ��Ҫ���� h =3
    scanf("%d", &h);
    float area,cir,vol;
    //����
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


//��׳˵ĺ� 
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






