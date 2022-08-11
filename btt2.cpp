#include <stdio.h>
int main(){
	int a,b;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	if(a==0 || b==0)
	{
		printf("%d",(a+b));
	}
	int bcnn=a*b;
	while(a!=b)
	{
		if(a<b)
		{
			b=b-a;
		}else
		   a=a-b;
	}
	printf("uoc so chung lon nhat la: %d\n",b);
	 bcnn/=b;
	  printf("bcnn la: %d",bcnn);
}
