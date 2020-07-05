#include <stdio.h>

long long int DT[101];

int main() {
    DT[0] = 1;
    DT[1] = 2;
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        int n;
        scanf("%d", &n);

        for(int i = 2; i <= n; i++) {
            long long int sum = 0;
            for(int j = 0; j < i; j++) {
                sum += DT[j];
            }
            sum *= 2;
            sum += DT[i-2];
            DT[i] = sum;
        }
        printf("%lld\n", DT[n]);
    }
}
