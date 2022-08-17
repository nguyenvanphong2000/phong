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
	int min=A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]<min) min=A[i];
	}
	printf("so duong nho nhat la: %d",min);
}
