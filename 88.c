#include <stdio.h>
void main()
{
    int a, b, i, g,l;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    for(i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            g = i;
    }
    l=(a*b)/g;
    printf("LCM of %d and %d is %d", a,b, l);
    
}
