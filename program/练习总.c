#include<stdio.h>
#include<string.h>



void main()
{  int choice, i;
float price;
for(i=1;i <=25;i++){
scanf("%d",&choice);
if((choice)==-1) break; 
switch (choice){
case 1: price =2.5;break; 
case 2: price =1.5;break; 
case 3: price =4.5;break;
case 4: price =3.5;break; 
default: price=0.0;break;
}
printf("%0.1f\n",price);
}
printf("Thank\n");
}





