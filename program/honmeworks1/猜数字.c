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
	 	printf("��������Ҫ�µ����֣�");
		scanf("%d",&m);
 		
	 	sum++;
	 	
 		if(m==t)
 		{
 			printf("Ӯ��\n"); 
		 }
		 else if(m<t)
		 {
		 	printf("С\n");
		 }
		 else
		 {
		 	printf("��\n");
		 }
		 if(sum==10)
		 {
		 	 printf("��Ļ��������ˣ��±��������ɣ�"); 
		 goto end;
		 }
		
	 }while(m!=t);
	 printf("��Ϸ������\n");
	 printf("��һ������ %d �Σ�",sum);
	switch(sum)
	{
		case 1:
			printf("���ػ��������׻������Ǹ���ţ���ȥ���Ʊ�ɣ�");
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			printf("����ף����������̵�������ˮƽ��");
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			printf("��������Ѿ���������ˮƽ����ȥ���������Ұɣ�");
			break;
		case 10:
			printf("�����ˣ���û�������ۺ�֢��");
			break;
		default:
			printf("���Ǹ�����ң�\n��ûѧ�����ַ���ⶼ�²�������");
	}
	end:;
	return 0;
 }
 
