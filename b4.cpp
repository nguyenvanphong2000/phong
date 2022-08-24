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
	bool f=false;
	for(int i=n-1;i>=0;i--)
	{
		if(A[n]%2==1)
		{
			printf("so le cuoi cung la %d",A[i]);
			f =true;
			break;
		}
	}
	if(f==false)
	{
		printf("khong co so le nao trong mang");
	}
}
