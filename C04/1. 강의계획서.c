#include <stdio.h>

int main(){
    int n, m, s1, s2, a;
    float ans;
    scanf("%d %d %d %d %d", &n, &m, &s1, &s2, &a);
    ans = ((n-m)*0.3) + s1*0.3 + s2*0.3 + a;
    printf("%.1f", ans);
}
