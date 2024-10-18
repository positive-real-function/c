//斐波那契数列
/* 
#include<stdio.h>
main()
{
	int count,i,n,x1,x2,x;
	printf("Enter n:");
	scanf("%d",&n);
	x1=x2=1;
	printf("%6d%6d",x1,x2);
	count=2;
	for(i=1;i<=n-2;i++){
		x=x1+x2;
		printf("%6d",x);
		count++;
		if(count%6==0)
			printf("\n");
		x1=x2;
		x2=x;
	}
}
*/
/*
#include<stdio.h>
int main()
{
	int col, i, j, row;
	int a[2][3];
	printf("Enter array(2*3):");
	for(i = 0; i < 2; i++)
		for(j = 0; j < 3;j++)
			scanf("%d",&a[i][j]);
	row=col=0;
	for(i = 0; i < 2; i++)
		for(j = 0; j < 3;j++)
			if(a[i][j]>a[row][col]){
			row=i;col=j;
			}
	printf("max = a[%d][%d] = %d\n", row, col, a[row][col]);
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3;j++)
		printf("%4d",a[i][j]);
		printf("%\n");}
	
}
*/
/*
#include<stdio.h>
main()
{
	int op1, op2, res;
	char operator;
	scanf("%d", &op1);
	operator = getchar();
	while(operator != '='){
		scanf("%d", &op2);
		switch(operator){
		case '+':res = op1+op2;break;
		case '-':res = op1-op2;break;
		case '*':res = op1*op2;break;
		case '/':res = op1/op2;break;
		default: res=0;
		}
		op1 = res;
		operator = getchar();
	}
	printf("%d\n",res);
}
*/
/*
#include<stdio.h>
#define MAXLEN 80
int main()
{
	int k = 0, number = 0;
	char str[MAXLEN];
	while((str[k] = getchar()) != '#') 
		k++;
	str[k] = '\0';
	for(k = 0; str[k] != '\0'; k++){
	
		if(str[k]>='0'&&str[k]=='9'||str[k]=='A'||str[k]=='B')
			if(str[k]>='0'&&str[k]=='9')
				number = number * 12 + str[k] - '0';
			else if(str[k]=='A'||str[k]=='B')
				number = number * 12 + str[k] - 'A' + 10;
			else; //第15行
		else break; //第16行
	}	printf(" %d\n",number);
}
*/
























