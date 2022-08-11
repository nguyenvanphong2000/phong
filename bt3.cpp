#include <stdio.h>
int main()
{
	int n,i,s;
	printf("nhap n=");
	scanf("%d",&n);
	i=0;
	while(n!=0)
	{
	   i=n%10;
	   n/=10;
	   s+=i;	
	}
      printf("\ntong cac chu so cua n la: %d",s);
}
