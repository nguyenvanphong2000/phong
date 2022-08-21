#include <stdio.h>
#include <math.h>

int tong(int n,int s)
{
	int i=0;
	while(n!=0)
	{
	    i=n%10;
	    n/=10;
	    s+=i;
    }
	return s;
}
int main()
{
	int n,s;
	 printf("nhap n=");
	 scanf("%d",&n);
	 printf("\ntong cac chu so cua n la: %d",tong(n,s));  
}

