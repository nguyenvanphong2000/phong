#include <stdio.h>

float chuvi(int a,int b,int c)
{
	float P=a+b+c;
	return P;	
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
	
	if(a>=b+c || b>=a+c || c>=a+b)
	{
		printf("\nba canh vua nhap khong phai la ba canh cua tam giac");
	}else
	     {
           printf("\nchu vi tam gaic la:%.3f",chuvi(a,b,c));
         }
}
