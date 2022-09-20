#include <stdio.h>
int main(){
	int n,i;
	printf("nhap n=");
	scanf("%d",&n);
	float sum;
	for(int i=1;i<=n;i++)
	{
		sum=sum+1.0/i;
	}
	if(n>=0)
	{
	  printf("%.2f",sum);
    }else{
    	   printf("du lieu nhap vao khong hop le");
	     }
}
