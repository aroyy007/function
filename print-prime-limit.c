//C program to list all prime number between an interval using function.
#include<stdio.h>
int prime(int num);
int main()
{
    int n,start,end;
    printf("Enter start limit and end limit : ");
    scanf("%d %d",&start,&end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for (n = start; n <= end; n++) {
        if (prime(n)) {
            printf("%d ", n);
        }
    }
    return 0;
}
int prime(int num)
{
    for(int i = 2; i<num ; i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}

