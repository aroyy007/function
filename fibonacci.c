/// C program to print Fibonacci series using recursion in C
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    fibonacci(n, 0, 1);

    return 0;
}

void fibonacci(int n, int a, int b)
{
    if (n > 0)
    {
        printf("%d ", a);
        fibonacci(n - 1, b, a + b);
    }
}
