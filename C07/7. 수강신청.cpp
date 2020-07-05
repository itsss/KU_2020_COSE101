#include <stdio.h>

int ans = 0;

int main() {
    int h, m, s, A, B;
    scanf("%d %d %d %d %d", &h, &m, &s, &A, &B);
    
    if(((10+B)*3600+30*60) > 43200) ans += 3000;
    
    int tm1 = ((10+B)*3600+30*60) - (h*3600+m*60+s);
    if(tm1 >= 10800 && tm1 % 10800 == 0) ans += 1500*(tm1 / 10800-1);
    else ans += 1500 * (tm1 / 10800);
    
    int tm2 = tm1 - A*3600;
    if((tm2 < 0)) {}
    else if(tm2%3600 == 0) {
        int cal = (tm2 / 3600);
        ans += (cal / 5) * 4000;
        ans += ((cal%=5) / 3) * 2500;
        ans += (cal%=3)*1000;
    }
    else {
        int cal = (tm2 / 3600+1);
        ans += (cal / 5) * 4000;
        ans += ((cal%=5) / 3) * 2500;
        ans += (cal%=3)*1000;
    }
    
    printf("%d", ans);
}
