#include <stdio.h>
int main(){
	int a;
	printf("nhap a=");
	scanf("%d",&a);
	
	int b;
	printf("nhap b=");
	scanf("%d",&b);
	
	int c;
	printf("nhap c=");
	scanf("%d",&c);
    
	 int max=a;
       if(max<b)max=b;
       if(max<c)max=c;
       printf("%d la so lon nhat",max);
}
