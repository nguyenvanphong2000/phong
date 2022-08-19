#include <stdio.h>
#include <math.h>
int main(){
    int A[1000],n,x;
    printf("nhap n:");
    scanf("%d",&n);
    printf("nhap x:");
    scanf("%d",&x);
    for (int i=0;i<n;i++)
	{
        printf("A[%d]",i);
        scanf("%d",&A[i]);
    }
    int gtgn,gt;
    for (int i=0;i<n;i++)
	{
      if (x!=A[i])
	  {
       if (gtgn>abs(A[i]-x)) 
	   {
        gtgn=abs(A[i]-x);
        gt=A[i];
       }
      }
    }
    printf("gia tri gan %d nhat la:",x);
    for (int i=0;i<n;i++)
	{
        if (gtgn==abs(A[i]-x))
        printf("\t%d",A[i]);
    }
}
