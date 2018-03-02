#include<stdio.h>

void main()
{
int n,l,a[100],f=0,i,d;
printf("\nEnter a limit:\n");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
 d=a[i+1]-a[i];
 if(d==1)
 {
   f=1;
 }
 else
 {
   printf("%d",a[i]+1);
 }
}
}
