#include <stdio.h>
int main()
{
	char s1[1000];
	printf("nhap chuoi 1:\n");
    scanf("%s",s1);
    printf("nhap chuoi 2:\");
    scanf("%s",s2);
    printf("chuoi vua nhap 1:%s\n",s1);// hoa
    printf("chuoi vua nhap 2:%s\n",s2);// mai
    
    strcat(s1,s2);// s1=s1 +s2;
    printf("chuoi vua nhap 1:%s\n",s1);//hoamai
    printf("chuoi vua nhap 2:%s\n",s2);//mai
    
    strcat(s2,s1); //s2=s2 +s1;
     printf("chuoi vua nhap 1:%s\n",s1);//
    printf("chuoi vua nhap 2:%s\n",s2);//
}
