#include <stdio.h>

int arr[1100][1100], copy[1100][1100];

int main() {
    int n, m, g;
    scanf("%d %d %d", &n, &m, &g);

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int a = 0; a < g; a++) {
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                int cp = arr[i+1][j] + arr[i-1][j] + arr[i][j+1] + arr[i][j-1];
                cp += arr[i+1][j+1] + arr[i-1][j+1] + arr[i+1][j-1] + arr[i-1][j-1];
                
                if(cp >= 4 || cp <= 1) copy[i][j] = 0;
                else if(cp == 3) copy[i][j] = 1;
                else copy[i][j] = arr[i][j];
            }
        }

        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                arr[i][j] = copy[i][j];
            }
        }
    }

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(j < n) printf("%d ", arr[i][j]);
            else printf("%d\n", arr[i][j]); // Avoid PE.
        }
    }
}
