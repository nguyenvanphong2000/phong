#include <stdio.h>
#include <math.h>
int main(){
	int n,fn;
	printf(" nhap n=");
	scanf("%d",&n);
	
	int f0,f1;
	 f0=1;
	 f1=1;
	
	for(int i=2;i<n;i++)
	{
		fn=f0+f1;
		f0=f1;
		f1=fn;
    }
    printf("so dung o vi tri thu n trong day so fibonaci: %d",fn);
}
