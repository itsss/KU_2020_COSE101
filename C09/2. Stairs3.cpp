#include <stdio.h>

int DT[21];

int main() {
    DT[0] = 1;
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        int n, m;
        scanf("%d %d", &n, &m);
        for(int j = 1; j < n; j++) {
            DT[j] = 0;
            for(int k = 1; k <= m; k++) {
                if(j-k == -1) DT[j]++;
                if(j-k < 0) break;
                DT[j] += DT[j-k];
            }
        }
        printf("%d\n", DT[n-1]);
    }
}