#include <stdio.h>

void pascal(int n) {
    int p[100][100] = {0};
    p[1][n] = 1;
    
    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= n*2; j++) {
            p[i][j] = p[i-1][j-1] + p[i-1][j+1];
        }
    }
    
    for(int i = 1; i <= n; i++) {
        int chk = 0;
        for(int j = 1; j <= n*2; j++) {
            if(chk >= i) {
                printf("\n");
                break; // avoid PE
            }
            if(p[i][j] == 0) printf(" ");
            else {
                printf("%d", p[i][j]);
                chk++;
            }
        }
        // if(!(i > n)) printf(" \n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    pascal(n);
}
