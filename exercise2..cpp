#include <stdio.h>

void mang(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	scanf("%d",&arr[i]);
}
void HoanVi(int arr[],int n)
{
	for (int i = 0; i < n/2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
}
int main(void)
{
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int arr[n];
	mang(arr,n);
	printf("mang vua nhap:%d",HoanVi(arr,n));
}

