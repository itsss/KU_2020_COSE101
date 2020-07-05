#include <stdio.h>

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int n, m, N, i;
    scanf("%d %d %d", &n, &m, &N);
    
    int arr[n*m], d[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &d[i]);
    }
    
    for (int i = N - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (d[j] < d[j+1]) swap(&d[j], &d[j+1]);
        }
    }
    for (i = 0; i < n*m; i++) arr[i] = d[i];
    int a = i, sum=0;
    for (i = 1; sum < N; i++) {
        for (int j = 0; j < n*m; j++) {
            if (arr[j] == i) sum++, arr[j] += d[a++];
        }
    }
    printf("%d", i-1);
}
