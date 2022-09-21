#include <stdio.h>
#include <string.h>
void chuhoa(char s1[])
{
	for(int i=0;i<strlen(s1);i++)
    {
    	if(s1[i]>=97 && s1[i]<=122)
    	{
    		s1[i]-=32;
		}
	}
}
int main()
{
	char s1[100];
	printf("nhap chuoi:");
    scanf("%s",s1);
    chuhoas1;
    printf("chuoi khi bien doi: %s",s1);
}
