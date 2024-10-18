#include<stdio.h>
 int main()
 {
 	printf("please input a number:(if you want to quit this program,please input \"0\").\n");
 	int number;
 	
 	do{
 		scanf("%d",&number);
	 }while(number!=0);
	 
	 printf("the program over!");
 }
 
 
