#include <stdio.h>
int main(){
	int n,i;
	printf("nhap n=");
	scanf("%d",&n);
	i=n-1;
	while (i>0){
		//yes
		if (i%2==0 && i%3==0)break;
		i--;
	}
	    printf("%d",i);
	    //no
}
