#include <stdio.h>
#include <math.h>
 
int main()
{
    int n;
    long long int A[100001];
    long long int N[100001];
    long long int b[100001];
 
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%lld %lld %lld", &A[i], &N[i], &b[i]);
        
        long long int memo[35];
        
        memo[0] = 1 % b[i];
        memo[1] = A[i] % b[i];
        
        for(int j = 2; j <= 34; j++) {
            memo[j] = (memo[j-1] * memo[j-1]) % b[i];
        }
        
        long long int cnt = 1, res = 1;
        while(N[i]) {
            if(N[i] % 2 == 1) {
                res *= memo[cnt];
                res %= b[i];
            }
            cnt++;
            N[i] = N[i] / 2;
        }
        printf("%lld\n", res);
    }
}
