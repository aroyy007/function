/// C program to find factorial of a number using recursion
#include <stdio.h>

int factorial(int n)
{
    int ans = 0;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        ans = n * factorial(n - 1);
        return ans;
    }
}


int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("\n");
    printf("Factorial of %d is %d", n, factorial(n));
}
