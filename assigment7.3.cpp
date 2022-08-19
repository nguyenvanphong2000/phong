#include <stdio.h>
int main(){
    int A[100],n;
    printf("nhap n:");
    scanf("%d",&n);
    int min,max;
    for (int i=0;i<n;i++)
	{
        printf("A[%d]",i);
        scanf("%d",&A[i]);
    }
     max=A[0];
    for (int i=0;i<n;i++)
	{
       if (A[i]>max)
	   {
         max=A[i];
        }
    }
     min=A[0];
    for (int i=0;i<n;i++)
	{
        if (A[i]<min)
	  {
        min=A[i];
      }
    }
     printf("doan chua tat ca gia tri trong mang la: [%d;%d]",min,max);
}
