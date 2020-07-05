#include <stdio.h>
#include <math.h>

int main() {
    int r, a, n;
    scanf("%d %d %d", &r, &a, &n);
    printf("%d\n", (int)floor((double)(a * pow((double)r / 100 + 1, n)) - ((a * pow((double)r / 100 + 1, n) - a) * 0.154)));
}
