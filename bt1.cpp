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
			s=s+i;
			printf("%d\t",i); 
        }else
		{
		}
    }
		printf("\ntong cac uoc cua n la: %d",s);
}
