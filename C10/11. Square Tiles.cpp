#include <stdio.h>

int solve(int a, int b) {
    int ans = 987654321;

    if(a==b) return 1;
    if(a==1) return b;
    if(b==1) return a;
    
    for(int i = 1; i <= a/2; i++) if(ans > solve(i,b) + solve(a-i,b)) ans = solve(i,b) + solve(a-i,b);
    for(int i = 1; i <= b/2; i++) if(ans > solve(a,i) + solve(a,b-i)) ans = solve(a,i) + solve(a,b-i);
    return ans;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", solve(a, b));
}
