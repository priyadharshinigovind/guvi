#include <stdio.h>
void main()
{
    char a[90];
    scanf("%s",a);
   // printf("\n");
  for(int i=0;a[i]!='\0';i++)
  {
    if(a[i]>='0'&&a[i]<='9')
    {
      printf("%c",a[i]);
    }
 
  }
    
}
