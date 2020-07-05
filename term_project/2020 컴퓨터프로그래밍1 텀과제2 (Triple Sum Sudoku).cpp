#include <stdio.h>
#define SOLVE 81
 
int sum[9], arr[9][9], r[11][11], c[11][11], tmp[11][11], sw;
 
int chk(int a) {
    return sum[a] == 1000*arr[a][0] + 100*arr[a][1] + 10*arr[a][2] + arr[a][3] + 100*arr[a][4] + 10*arr[a][5] + arr[a][6] + 10*arr[a][7] + arr[a][8];
    // Triple Sum Sudoku Rule
}

void prn() {
    for (int i = 0; i < 9; i++) {
         for (int j = 0; j < 9; j++) {
            if(j < 8) printf("%d ", arr[i][j]);
            else printf("%d\n", arr[i][j]); // avoid PE.
         }
    }
    return;
}
 
int chk1(int x, int y) {
    return x < 8 || (x == 8 && chk(y));
}
 
void solve(int a) {
    if (a == SOLVE) {
        sw=1;
        prn();
    }
 
    int x = a%9, y=a/9;
    if (arr[y][x] && chk1(x,y)) solve(a + 1);
    else {
        for (int i = 1; i <= 9; i++) {
            if (sw == 1) return;
            if (!r[y][i] && !c[x][i] && !tmp[y/3*3+x/3][i]) {
                arr[y][x] = i, r[y][i] = c[x][i] = tmp[y/3*3+x/3][i] = 1;
                if (chk1(x, y)) solve(a + 1);
                arr[y][x] = r[y][i] = c[x][i] = tmp[y/3*3+x/3][i] = 0;
            }
        }
    }
}
int main() {
    for (int i = 0; i < 9; i++) {
        scanf("%d", &sum[i]);
        for (int j = 0; j < 9; j++) {
            scanf("%d", &arr[i][j]);
            if (!arr[i][j] == 0) {
                r[i][arr[i][j]]++, c[j][arr[i][j]]++, tmp[i/3*3+j/3][arr[i][j]]++;
            }
        }
    }
    solve(0);
}
