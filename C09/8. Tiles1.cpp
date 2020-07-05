#include <stdio.h>

long long int f(long long int n)
{
    if(n == 1) return 1;
    if(n == 2) return 2;
    else return f(n-1) + f(n-2);
}

int main()
{
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        long long int a;
        scanf("%lld", &a);
        printf("%lld\n", f(a));
    }
}
