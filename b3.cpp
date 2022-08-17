#include <stdio.h>
int main()
{
	int n,x,dem=0;
	printf("nhap mang n=");
	scanf("%d",&n);
	printf("nhap x=");
	scanf("%d",&x);
	int A[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(x==A[i])
		{
			dem++;
			printf("x thuoc mang");
		}
	}
	if(dem==0)
	{
		printf("x khong thuoc mang");
	}
}
