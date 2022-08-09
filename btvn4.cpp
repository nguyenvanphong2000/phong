#include <stdio.h>
int main (){
	int n,daonguoc;
	printf("nhap n=");
	scanf("%d",&n);
	daonguoc=0;
	while (n !=0){
		//yes
		daonguoc =daonguoc*10 +n%10;
		n=n/10;
}
		printf("%d",daonguoc);
	
	    //no
	
}
