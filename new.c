

/*1.����
#include<stdio.h>
#include<math.h>
main()
{
	int x,y,k,i=0;
	for(x=200;x<=300;x++)
	{
		k=sqrt(x);
		for(y=2;y<=k;y++)
		{
			if(x%y==0)
				break;}
		if(y>k)
		{printf("%d\n",x);
		i++;}
	
	}
	printf("���У�%d\n",i);
}*/


/*2.�˷��ھ�
#include<stdio.h>
main()
{
	int a,b;
	for(a=1;a<=9;a++)
	{
		for(b=1;b<=9;b++)
		{
          printf("%d*%d=%-4d",a,b,a*b);
		}
		if(a<=b)
			printf("\n");
		}
}*/

//3.ˮ�ɻ���
/*#include<stdio.h>
main()
{
	int a,b,c;
	for(a=1;a<=9;a++)
	{
		for(b=0;b<=9;b++)
		{
			for(c=0;c<=9;c++)
			{
				if(a*100+b*10+c==a*a*a+b*b*b+c*c*c)
					printf("%d\n",a*100+b*10+c);
			}
		}
	}
}*/
/*
#include<stdio.h>
main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("*");
		}
		printf("\n");
	}
} */

/*��������ʵ����֪��-1������ͳ����������
#include<stdio.h>
main()
{
	int x,i=0;
	printf("����������ʵ��=");
	scanf("%d",&x);
	while(x!=-1)
	{if(x>0)
		i+=1;
		scanf("%d",&x);
	}
	printf("����:%d\n��",i);
}*/

/*�׳�
#include<stdio.h>
main()
{
	int x,i=1,j=1;
	printf("����������ʵ��������׳�=");
	scanf("%d",&x);
	while(i<=x)
	{
     j*=i++;
	}
	printf("��ʵ���׳�=%d\n",j);
} */

/*ͳ�Ƹ����ַ�������
#include<stdio.h>
main()
{
	int x=0,y=0,z=0,c=0;
	char ch;
	printf("�����������ַ�=");
	while((ch=getchar())!='\n')
	{
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
			x+=1;
		else if(ch>='0'&&ch<='9')
			y+=1;
		else if(ch==' ')
			z+=1;
		else
			c+=1;
	}
	printf("��ĸ�ַ�����%d��\n-----------------\n�����ַ�����%d��\n-----------------\n�ո��ַ�����%d��\n-----------------\n�����ַ�����%d��\n-----------------\n",x,y,z,c);
}*/

/*������1-1/3+1/5.....֪�����һ���ֵС��0.025
#include<stdio.h>
main()
{
	float x=1,y=0;
	int i=0;
    while(1/x>=0.025)
	{i++;
	    if(i%2==0)
		{
		y+=-1/x;
		x+=2;
		}
			else 	
			{
			y+=1/x;
			x+=2;}              
	}
printf("%f\n",y);
}*/

/*��1+2+..+100
#include<stdio.h>
main()
{
 int x=0,i=1;
do
{

	i++;
	x+=i;
}while(i<=100);
printf("%d\n",x);
}*/
/*#include<stdio.h>
main()
{
 int x=0,i=1;
 while(i<=100)
 {
	x+=i;
	i++;
}
 printf
 printf("%d\n",x);
}
/*#include<stdio.h>
main()
{
	int x=0,i;
	for(i=1;i<=100;i++)
	{
		x+=i;
	
	}printf("%d\n",x);
}*/


/*���������
#include<stdio.h>
int main(){
	int a = 0;
	int b = 0;
	int i = 0;
	printf("���� a b:");
	scanf("%d%d", &a, &b);
	if (a > b){
		i = b;
	}
	else i = a;
	while (a%i != 0 || b%i != 0){
		i--;
	}
	printf("�������Ϊ%d\n", i);
	system("pause");
	return 0;
}*/

/*�Ƚ�������С
#include<stdio.h>
main()
{
	int i,x,max,min;
	scanf("%d",&x);
	max=min=x;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&x);
		if(x>max)
			max=x;
		if(min>x)
			min=x;
	}
	printf("%d\n%d\n",max,min);
}*/

/*ŷ������㷨���������������С��������
#include<stdio.h>
main()
{
	int x,y,z,a,q;
	scanf("%d%d",&x,&y);
	a=x*y;
	while(z!=0)
	{
		z=x%y;
		x=y;
		y=z;}
	printf("�������=%d\n",x);
q=a/x;
printf("��С������=%d\n",q);
}



/*�ж�����
#include<stdio.h>
main()
{
	int i,n;
	scanf("%d",&n);
	for(i=2;i<=(n-1);i++)
	{ 
		if(n%i==0)
			break;}       
	if(i>=n-1)
	printf("����\n");
	else
		printf("����");
}*/

/*������1+3/5+5/7.
#include<stdio.h>
main()
{
	double x=0,i;
	for(i=1;1/i>=0.000001;i++)
	{
x+=1/(2*i-1);
	}
	printf("x=%f\n",x);
}*/


/*�������
#include<stdio.h>
main()
{
	int a,max,i;
	max=a;
	for(i=1;i<=2;i++)
	{
		scanf("%d",&a);
		if(a>max)
			max=a;
		else
			max=a;
	}
	printf("max=%d",max);
}*/
/*#include<stdio.h>
main()
{
	int a,max,i=1;
	while(i<=2)
	{
		scanf("%d",&a);
		if(a>max)
			max=a;
		else
			max=a;
		i++;}
	printf("max=%d",max);
}*/


/*4
36�˰�36ש����4��Ů3������1
#include<stdio.h>
main()
{
	int x,y,z;
	for(x=1;x<9;x++)
	{
		for(y=1;y<12;y++)
		{
			for(z=0;z<36;z+=2)
			{
				if(4*x+3*x+z/2==36&&x+y+z==36)
					printf("��=%d\nŮ=%d\n��=%d\n",x,y,z);
			}
		}
	}
}*/

/*5 ����ͬ��
35ͷ��94�� ��=2 ��=4
#include<stdio.h>
main()
{
	int x,y;
	for(x=1;x<35;x++)
	{
		for(y=1;y<35;y++)
		{
			if(x+y==35&&2*x+4*y==94)
				printf("��=%d,��=%d\n",x,y);

/*100֮�ڵ���ȫ��
#include<stdio.h>  
main()
{
	int a,b,s;
for(a=1;a<=100;a++)
{s=0;
	for(b=1;b<a;b++)
	{
		
		if(a%b==0)
			s+=b;
	}
	if(s==a)
	printf("%d\n",a);
}
}*/
  


/*ͼ��
#include<stdio.h>
main()
{
	int a,b,c;
	for(a=1;a<=5;a++)
	{
		for(c=4;c>=a;c--)
		{printf(" ");}
		for(b=1;b<=2*a-1;b++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/

/*ͼ��
#include<stdio.h>
main()
{
	int a,b,c;
	for(a=1;a<=5;a++)
	{
		for(c=0;c<=a-1;c++)
	{
		printf(" ");}
		for(b=11;b>=2*a+1;b--)
		{		printf("*");}
	
printf("\n");
	}
}*/

/*ͼ��
#include<stdio.h>
main()
{
	int a,b,c;
	for(a=1;a<=5;a++)
	{
		for(b=4;b>=a;b--)
		{printf(" ");}
		for(c=1;c<=a;c++)
		{printf("*");}
		printf("\n");
	}
}*/
/*ͼ��
#include<stdio.h>
main()
{
	int a,b,c,d,e,f;
	for(a=1;a<=5;a++)
	{
		for(c=4;c>=a-1;c--)
		{printf(" ");}
		for(b=1;b<=2*a-1;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(d=1;d<=5;d++)
	{
		for(e=0;e<=d-1;e++)
	{
		printf(" ");}
		for(f=11;f>=2*e+1;f--)
		{ printf("*");}
	
printf("\n");
	}
}*/
/*���鰴�Ӵ�С����
#include<stdio.h>// 1 12 15 21 23
int main(void)
{
	int m[5]={1,8,3,4,5},i,j,t;
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=6;j++)
		{
			if(m[i]<m[j])
			{t=m[j];
			m[j]=m[i];
			m[i]=t;}
		}
		printf("%d\n",m[5]);
	}
}*/

/*���������ֵ
#include<stdio.h>
main()
{
	int a[5]={1,50,3,4,12},i,j,max;
	max=a[0];
	for(i=0;i<=4;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("%d\n",max);
}*/

#include<stdio.h>
main()
{
	int [a][j]={{1,2,3,}{4,5,6}},i,q,m,n;
	for(i=0;i<2;i++)
		for(q=0;q<2;q++)
			scanf("%d%d",&a[i],&a[q]);
		printf("%d%d",a[3],j[3]);
}

