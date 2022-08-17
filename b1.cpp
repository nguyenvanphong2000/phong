#include <stdio.h>
int main()
{  int n,demL;
     printf("nhap mang n=");
     scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
     scanf("%d",&A[i]);
    }
	double tbL ,tongL=0;
		 demL=0;
		for(int i=0;i<n;i++)
		  if(A[i]%2!=0)
		  {
		  	tongL=tongL+A[i];
		  	demL++;
		  }
		  tbL=double(tongL/demL);
	printf("TBC so le la: %.3lf",tbL);

}
