#include<stdio.h>
void main()
{
  int a,b,gcd;
  printf("\nenter two numbers");
  scanf("%d%d",&a,&b);
  for(int i=1;i<=a&&i<=b;i++)
  {
    if((a%i==0)&&b%i==0)
    {
       gcd=i;
    }
  }
  printf("\n%d",gcd);
}
