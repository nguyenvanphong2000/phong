#include <stdio.h>
int main(){
	int n,i,a;
	printf("nhap n=");
	scanf("%d",&n);
	i=0;
	while(n>0)
	{ i=n%10;
	  a=i;
	  n/=10;  
	}
	 printf("chu so dau tien la: %d",a);
	
}
