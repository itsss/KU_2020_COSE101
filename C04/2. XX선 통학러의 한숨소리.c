#include <stdio.h>

int main(){
    int a, b, c;
    int d, e, f;
    int cur, del, s;
    int m, h;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    cur = a*3600+b*60+c;
    del = d*3600+e*60+f;
    s = del - cur;
    m = s / 60;
    h = m / 60;
    s = s % 60;
    m = m % 60;
    printf("%d %d %d", h, m, s);
}
