#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>
int main()
{
int i , n;
unsigned long long fact = 1;
scanf("%d",&n);
if (n == 1)
{
return 1;
}
else
{
for(i=1;i<=n;i++)
{
fact *= i;
}
printf( "factorial of %d is %llu",n,fact);
}
return 0;
}
