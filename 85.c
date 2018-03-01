#include <stdio.h>

void main() 
{
 char a[100],b[100],c[100];
 int i,j=0,k=0,c1=0,c2=0;
 scanf("%s",a);
 for(i=0;a[i]!='\0';i++)
 {
   if(i%2==0)
   {
     b[j]=a[i];
     j++;
     c1++;
   }
   else
   {
     c[k]=a[i];
     k++;
     c2++;
   }
 }
 for(i=0;i<=c1-1;i++)
 {
   printf("%c",b[i]);
 }
 printf("\t");
 for(j=0;j<=c2;j++)
 {
   printf("%c",c[j]);
 }

}
