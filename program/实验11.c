#include<stdio.h>
/*
int main()
{
	int password;
	printf("���������룺");
	scanf("%d",&password);
	
	printf("��������ǣ�%d ,�������ڴ��%p��",password,&password);
	
	return 0; 
 } 
 */
 /*
 int main()
{
	int password;
	int *pword=&password;
	
	printf("���������룺");
	scanf("%d",&password);
	
	printf("��������ǣ�%d ,�������ڴ��%p��",password,pword);
	
	return 0; 
 } 
 */
 
 //�ɼ���
 
 
 
 #define N 10000
 
 void putin(int arr[],int len) // void putin(int *arr,int len)
 {
 	int i,a;
	
 	for(i=0;i<len;i++) 
 	{
	 	printf("������� %d ѧ���ɼ�: ",i+1);
 		scanf("%d",&a);
 		arr[i]=a;
	 }
 }
 
 
 void putout(int arr[],int len)
 {
 	int i;
 	printf("�����ĳɼ�Ϊ��");
 	for(i=0;i<len;i++)
 	{
 		printf("%d  ",arr[i]);
	 }
 }
 
 void sort(int arr[],int len)
 {
 	int i,j;
 	for(i=0;i<len-1;i++)
 	{
 		for(j=0;j<len-i-1;j++)
 		{
 			if(arr[j]<arr[j+1])
 			{
 				int temp=arr[j];
				 arr[j]=arr[j+1];
				 arr[j+1]=temp;
			 }
		 }
	 }
	 
 }
 
 
 int main()
 {
 	int len;
 	printf("������༶������");
	scanf("%d",&len);
	int arr[len];
	putin(arr,len);
	sort(arr,len);
	putout(arr,len);
	return 0; 
 }
 
 
 
 
