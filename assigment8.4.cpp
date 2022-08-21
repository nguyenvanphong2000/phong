#include <stdio.h>

int UCLN(int a,int b)
{
		if(a==0 || b==0)
	{
		printf("%d",(a+b));
	}
	while(a!=b)
	{
		if(a<b){
			b-=a;
		}else{ 
		a-=b;
		}
	}
	return b;
}
int main()
{
	int a,b;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	printf("\nuoc chung lon nhat la: %d",UCLN(a,b));
}
