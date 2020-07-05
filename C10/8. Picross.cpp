#include <stdio.h>

int main() {
    int n, N;
    long long int res = 1;
    scanf("%d %d", &n, &N);
    
    int acc = 0;
    for(int i = 0; i < N; i++) {
        int a;
        scanf("%d", &a);
        acc += a;
    }
    
    int rep = n-acc-N+1;
    for(int i = 0; i < rep; i++) {
        res *= n-(long long int)acc-i+1;
        res /= (long long int)i+1;
    }
    
    printf("%lld", res);
}
