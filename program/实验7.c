//#include <stdio.h>
//void main()
//{  
//   /****** 1 ******/
//   int n,s=0;
//   scanf("%d",&n);
//   /****** 2 ******/
//   if (n<0)
//    n = -n; //n=n<0?-n:n;
//   /****** 3 ******/
//   while(n>0)
//   {
//     /***** 4 *****/
//     s+=n%10;
//	 n=n/10;
//   }
//   printf("%d\n",s);
//}


//��������ʱ����n,���n�������������ӡ����磺����nΪ60�������60=2*2*3*5
#include <stdio.h>
void main()
{   int n,i;
    /****** 1 ******/
    scanf("%d",&n);
	   printf("%d\n",n);
    /****** 2 ******/
    i=2;
	  /****** 3 ******/
   while(n>1)
      if(n%i==0) {
        printf("%d*",i);
	    /****** 4 ******/
        n=n/i;
	  }
   else i++;
printf("\b \n");
}

//����x������eps������eps���������ʽ
//1-x+x2/2!-x3/3!+ x4/4!- x5/5!+......
//�ĺͣ�ֱ��ĩ��ľ���ֵС��epsΪֹ��
//#include <stdio.h>
//#include <math.h>
//
//double fact(int m)
//{
//    double f;
//    if(m==1)
//        f=1;
//    else f=fact(m-1)*m;
//    return f;
//}
//
//
//void main()
//{ 
//	double x,eps,s=1,t=1;
//  	/******* 1 ********/
//  	int i=0;
//  	/******* 2 **********/
//  	scanf("%lf %lf",&x,&eps);
//  	printf("%.0f %f\n",x,eps);
//  do {
//    i++;
//	/***** 3 *****/
//    t=pow(x,i)/fact(i);
//    if(i%2==0)
//    {
//    	t=-t;
//	}
//    s+=t;
//    /***** 4 *****/
//  } while(fabs(t)>=eps);
//  	printf("%lf\n",s);
//}

/*
void main()
{
    double x;//��Ŀ�в�û���޶�xΪ������
    double y;
    double eps;//eps��Ȼ��double���͡�
    double sum=0;
    scanf("%lf",&x);
    scanf("%lf",&eps);
    for(i=1;fabs(y)>=eps;i++)
    {
        y=pow(x,i)/jiecheng(i);
        if(i%2==0)
            y=-y;
        sum+=y;
    }
    printf("%.3lf",sum);
}
*/

//#include <stdio.h>
//#include <math.h>
//void main()
//{ double x,eps,s=1,t=1;
//  /******* 1 ********/
//  int i=0,flag=1;
//  /******* 2 **********/
//  scanf("%lf %lf",&x,&eps);
//  printf("%.0f %f\n",x,eps);
//  do {
//    i++;
//	/***** 3 *****/
//    t=t*x/i;
//    flag=-flag;
//    s+=flag*t;
//    /***** 4 *****/
//  } while(fabs(t)>=eps);
//  printf("%f\n",s);
//}






