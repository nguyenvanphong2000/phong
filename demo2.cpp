#include <stdio.h>
int main()
{
	char kitu;
	printf("nhap chuoi:");
	scanf("%c",&kitu);
	
	if(kitu>='a' && kitu<='z')
	{
		kitu-=32;
	}
	  printf("%c",kitu);
}
