#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, n, m, l, x, y, X;
    scanf("%d %d %d %d %d %d %d %d", &a, &b, &n, &m, &l, &x, &y, &X);

    double water, bubble, esp, sug, wdu;

    water = ((X) / (double)(x + y)) * y;
    bubble = ((X) / (double)(x + y)) * x;

    esp = ((bubble) / (double)(n+m+l)) * n;
    sug = ((bubble) / (double)(n+m+l)) * m;
    water += ((bubble) / (double)(n+m+l)) * l;

    wdu = ((esp) / (double)(b)) * a;
    water += ((esp) / (double)(b)) * b;

    wdu = wdu * 100;
    wdu = ceil(wdu);
    wdu = wdu / 100;

    sug = sug * 100;
    sug = ceil(sug);
    sug = sug / 100;

    water = water * 100;
    water = ceil(water);
    water = water / 100;

    printf("%.2lf\n%.2lf\n%.2lf", wdu, sug, water);
}
