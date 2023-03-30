#include <stdio.h>

int is_prime(int num);
unsigned long long int factorial(int num);

int main()
{
    int num;
    unsigned long long int fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(is_prime(num))
    {
        fact = factorial(num);
        printf("%d! = %llu\n", num, fact);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}

int is_prime(int num)
{
    int i;
    if(num<=1)
    {
        return 0;
    }
    for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}

unsigned long long int factorial(int num)
{
    unsigned long long int fact = 1;
    int i;
    for(i=2; i<=num; i++)
    {
        fact *= i;
    }
    return fact;
}
