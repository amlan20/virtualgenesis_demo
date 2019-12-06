#include <stdio.h>
#include<stdio.h>

unsigned int factorial(unsigned int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("Factorial of %d is %u", num, factorial(num));
    return 0;
}
