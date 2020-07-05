#include<stdio.h>

long long int memo[1000011] = {0, 1, 2};

long long int f(long long int k)
{
    if (memo[k]) return memo[k];
    else return memo[k] = (f(k-1) + f(k-2));
}

int main()
{
    int x;
    scanf("%d", &x);
    printf("%lld", f(x) );
    return 0;
}
