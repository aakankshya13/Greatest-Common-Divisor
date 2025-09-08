#include <stdio.h>

int gcd(int, int);

int main()
{
    int a, b;
    printf("Enter the a: ");
    scanf("%d", &a);
    printf("Enter the b: ");
    scanf("%d", &b);

    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));

    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else if (a < b)
    {
        return gcd(b, a);
    }
    else
    {
        return gcd(b, a % b);
    }
}
