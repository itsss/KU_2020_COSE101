#include <stdio.h>

long long int DT[1100];
long long int gcd(long long int a, long long int b) {
    if(a==0) return b;
    else return gcd(b%a, a);
}

int main() {
    int N;
    scanf("%d", &N);

    DT[1] = DT[2] = 1;
    for(int i = 3; i <= 1099; i++) {
        DT[i] = DT[i-1] + DT[i-2];
    }

    for(int i = 0; i < N; i++) {
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        long long int c = gcd(a, b);
        printf("%lld\n", DT[c]);
    }
}
