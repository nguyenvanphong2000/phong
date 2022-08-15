#include <stdio.h>
int main(){
	int i,n;
	printf("nhap n!=");
	scanf("%d",&n);
	int giaithua;
	  giaithua =1;
	for(i=1;i<=n;i++)
	{
		giaithua = giaithua * i;
	}
	printf("giai thua cua n la: %d",giaithua);
}
