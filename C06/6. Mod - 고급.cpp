//DESCRIPTION
//Mod - 초급과 똑같은 문제다. 다만 n이 좀 많이 커졌을 뿐
//
//A를 n번 곱한 값을 B로 나눈 나머지를 구해보자.
//
//INPUT
//* Line 1: 입력 갯수 N (1≤N≤100000)
//
//* Line 2~N+1: A, n, B가 공백으로 구분되어 입력된다. (1≤A,B≤10000, 0≤n≤2000000000‬)
//
//OUTPUT
//* Line 1~N : A를 n번 곱한 값을 B로 나눈 나머지를 출력한다.
//
//SAMPLE INPUT
//1
//2 3 5
//
//SAMPLE OUTPUT
//3
//
//HINT
//Overflow를 조심하세요!
//
//Time Limit도 조심하세요!


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

