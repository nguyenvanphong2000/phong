#include <stdio.h>
int main(){
	int n,x;
	printf("nhap n=");
	scanf("%d",&n);
	x=0;
	while(n!=0)
	{
		if(x<n%10)
		  x=n%10;	
		  n/=10;
	
	}
	printf("so lon nhat cua n la: %d",x);
}

