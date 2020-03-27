#include <stdio.h>

int main()
{
    long long int a;
    scanf("%lld", &a);
    printf("%lldTB\n", a);
    printf("%lldGB\n", a*1024);
    printf("%lldMB\n", a*1024*1024);
    printf("%lldKB\n", a*1024*1024*1024);
    printf("%lldB", a*1024*1024*1024*1024);
}
