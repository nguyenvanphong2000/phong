#include <stdio.h>
int main()
{
	int n;
	printf("nhap mang n=");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(int i=n-1;i<n;i--)
	{
		if(A[i]%2!=0)
		{
			printf("so le cuoi cung trong mang la:",A[i]);
		}
	}
}
