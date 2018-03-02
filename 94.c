#include<stdio.h>
void main()
{
  int a[100],i,n,k;
  printf("\nEnter limit:\n");
  scanf("%d",&n);
  printf("\nEnte rthe index");scanf("%d",&k);
  printf("\nEnter the elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    if(i+1==k)
    {
      printf("%d",a[i]);
    }
  }
}
