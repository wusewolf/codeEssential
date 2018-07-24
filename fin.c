#include <stdio.h>

unsigned long fin(unsigned n)
{
    if ( 0 == n || 1 == n)
    {
        return 1;
    }
    else
    {
        unsigned long num  =  n + fin(n-1); 
        printf("%lu  ", num);
        return num;
    }
}

unsigned long fin(unsigned n);

int main()
{
    unsigned int n = 0;
    scanf("%d", &n);

    printf("\nf(%lu)=%lu\n", n, fin(n));

    return 0;
}
