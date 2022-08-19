#include <stdio.h>
int main(){
    int a[1000],n,x;
    printf("nhap n:");
    scanf("%d",&n);
    printf("nhap x:");
    scanf("%d",&x);
    for (int i=0;i<n;i++){
        printf("a[%d]",i);
        scanf("%d",&a[i]);
        }
    int gtxn,gt,j=0;
         gtxn=(a[0]-x);
    for (int i=0;i<n;i++){
        if (x>=a[i])
		{
         if (x-a[i]>gtxn){
           gtxn=x-a[i];
           j=i;
           }
        }else
		     {
               if (a[i]-x>gtxn)
			   {
                 gtxn=a[i]-x;
                 j=i;
               }
             }
           }
           printf("gia tri xa gia tri x nhat la: %d",a[j]);
}
