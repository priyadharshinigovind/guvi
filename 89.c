#include<stdio.h>
void main()
{
  char a[60];
  printf("\nEnter a string");
  scanf("%s",a);
  int i=0,temp,j;
  for(i=0;a[i]!='\0';i++)
  {
    for(j=i+1;a[j]!='\0';j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  printf("\n%s",a);}
