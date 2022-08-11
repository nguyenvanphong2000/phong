#include <stdio.h>
int main(){
	int n,i,s;
	printf("nhap n=");
	scanf("%d",&n);
	s=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d\t",i);
	        s=s+i;
        }
    }
		printf("\ntong cac uoc cua n la: %d",s);
	
}
