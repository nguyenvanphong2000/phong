#include <stdio.h>
int main()
{
	int n,dem=0,ds=0;
	printf("nhap mang n=");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(int i=0;i<n;i++)
	{
		if (A[i] >0)
		{
			dem++;
			if(ds<dem)
			{
				ds=dem;
			}
		}else
		  {
			dem=0;
		  }
	}
	printf("so luong lien tiep lon nhat: %d",ds);
}
