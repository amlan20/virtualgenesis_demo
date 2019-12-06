#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,fact = 1;
scanf("%d",&n);
if (n == 1)
{
return 1;
}
else
{
for(int i=1;i<=n;i++)
{
fact *= i;
}
printf( "factorial of %d is %d",n,fact);
}
return 0;
}
