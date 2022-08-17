#include <stdio.h>
int main()
{  int n,demL;
     printf("nhap mang n=");
     scanf("%d",&n);
    int A[n];
    double tbc,tongL;
    for(int i=1;i<=n;i++)
    {
     scanf("%d",&A[i]);
    }
    for(int i=2;i<=n;i++)
    {
    	if(A[i]%2==1)
    	{
    		tongL+=A[i];
    		demL++;
		}
	}
	tbc= double (tongL/demL);
	printf("TBC so le o vi tri chan la: %d",tbc);
}
