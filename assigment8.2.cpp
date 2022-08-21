#include <stdio.h>
#include <math.h>


float chuvi(int a,int b,int c)
{
	float p=a+b+c;
	return p;	
}

float dientich(int a,int b,int c)
{
	float p,s;
	 p=(float)chuvi(a,b,c)/2.0;
     s=sqrt(p*( p- a)*(p - b)*(p - c));
     return s;
}
int main()
{
	int a,b,c;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	printf("nhap c=");
	scanf("%d",&c);
	if(a>=b+c || b>=a+c || c>= b+a)
	{
		printf("ba canh vua nhap khong phai ba canh cua tam giac");
	}
    else
    {
     printf("chu vi tam gaic la:%.3f",chuvi(a,b,c));
     printf("dien tich tam giac la: %f",dientich(a,b,c));
	}
}
