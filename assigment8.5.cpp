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
int BCNN(int a,int b)
{
	int bcnn = a*b;
	bcnn/=UCLN(a,b); 
	return bcnn;
}
int main()
{
	int a,b;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	if(a==0 || b==0)
	{
		printf("boi chung nho nhat la: %d",(a+b));
	}
    printf("\nboi chung nho nhat la: %d",BCNN(a,b));
	
}
