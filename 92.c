#include <stdio.h>
void main()
{
int a[90],i,n,sum=0;
printf("\nEnter the limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{ 
  scanf("%d",&a[i]);
sum+=a[i];
}
printf("%d",sum);
}
