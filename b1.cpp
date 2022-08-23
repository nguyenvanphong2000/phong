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
	int tbL ,tongL=0;
		 demL=0;
		for(int i=0;i<n;i++)
		{
		  if(A[i]%2!=0)
		  {
		  	tongL=tongL+A[i];
		  	demL++;
		  }
	    }
	    if(demL>0)
	    {
		double  tbL=double(tongL/demL);
	      printf("TBC so le la: %.3lf",tbL);
        }else{
        	printf("khong co so le nao trong mang");
		}
}
