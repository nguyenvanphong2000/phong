#include <stdio.h>
int main(){
	int n,i;
	printf("nhap n=");
	scanf("%d",&n);
	float s;
	for(i=1;i<=n;i++)
	{
		s=s+1.0/i;
	} 
	 printf("tong la: %.2f",s);
}
