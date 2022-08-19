#include <stdio.h>
#include <math.h>
#define MAX 100
int main()
{
	int n;
	printf("nhap mang n=");
	scanf("%d",&n);
	float A[MAX],B[MAX];

	for (int i=0;i<n;i++)
	{
		printf("\nnhap A[%d]",i);
		scanf("%f",&A[i]);
	}
	for (int i=0;i<n;i++)
	{
		printf("%.3f",A[i]);
	}
	float x=A[0];
	for(int i=0;i<n;i++)
	{
		x=(x>(fabs)(A[i]));
		x=(fabs)(A[i]);
		printf("%.3f",x);
	}
	printf("\ndoan chua tat ca cac gia tri trong mang la: [-%.3f,%.3f]",x,x,x);
}
