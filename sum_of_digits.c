/// sum of digits of a given number using recursion in C
#include <stdio.h>

sum_of_digits(int n)
{
    int ans = 0;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        ans = n % 10 + sum_of_digits(n / 10);
        return ans;
    }
}

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Sum of digits of %d is %d", n, sum_of_digits(n));
    return 0;
}
