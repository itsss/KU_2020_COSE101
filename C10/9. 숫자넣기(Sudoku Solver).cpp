#include <stdio.h>
#define bool _Bool
#define false 0
#define true 1

#define SOLVE 81
int arr[9][9];
bool r[9][9];
bool c[9][9];
bool s[9][9];

int chk(int x, int y) {
    return (x / 3) * 3 + (y / 3);
}

void solve(int a)
{
    if (a == SOLVE) {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(j < 8) printf("%d ", arr[i][j]);
                else printf("%d\n", arr[i][j]); // Avoid PE.
            }
        }
        return;
    }

    int x = a / 9, y = a % 9;
    if (arr[x][y] != 0) solve(a + 1);
    else {
        for (int i = 1; i <= 9; i++) {
            if (r[x][i] == 0 && c[y][i] == 0 && s[chk(x, y)][i] == 0) {
                r[x][i] = c[y][i] = s[chk(x, y)][i] = true;
                arr[x][y] = i; solve(a + 1); arr[x][y] = 0;
                r[x][i] = c[y][i] = s[chk(x, y)][i] = false;
            }
        }
    }
}

int main()
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] != 0) {
                r[i][arr[i][j]] = true;
                c[j][arr[i][j]] = true;
                s[chk(i, j)][arr[i][j]] = true;
            }
        }
    }
    solve(0);
}
