#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap a=");
	scanf("%d",&a);
	b=0;
	while(a>0)
	{
		c=a%10;
		if(c>b)
		  b=c;	
		a/=10;	
	}
	printf("so lon nhat cua a la: %d",b);
}

