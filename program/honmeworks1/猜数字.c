#include<stdio.h>
#include<math.h>
#include<stdlib.h> 
#include<time.h>
int main()
 {
 	int t,m,sum=0;
 	srand(time(NULL));
	t=rand()%100+1;
	  
 	do
	 {
	 	printf("请输入你要猜的数字：");
		scanf("%d",&m);
 		
	 	sum++;
	 	
 		if(m==t)
 		{
 			printf("赢！\n"); 
		 }
		 else if(m<t)
		 {
		 	printf("小\n");
		 }
		 else
		 {
		 	printf("大\n");
		 }
		 if(sum==10)
		 {
		 	 printf("你的机会用完了，下辈子再来吧！"); 
		 goto end;
		 }
		
	 }while(m!=t);
	 printf("游戏结束！\n");
	 printf("你一共猜了 %d 次！",sum);
	switch(sum)
	{
		case 1:
			printf("严重怀疑你作弊或者你是个天才，快去买彩票吧！");
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			printf("热烈祝贺你你的智商到了正常水平！");
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			printf("你的智商已经处于中下水平，快去喝六个核桃吧！");
			break;
		case 10:
			printf("很幸运，你没有唐氏综合症！");
			break;
		default:
			printf("你是个大输家！\n你没学过二分法嘛？这都猜不出来！");
	}
	end:;
	return 0;
 }
 
