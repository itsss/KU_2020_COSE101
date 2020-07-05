//3으로 나누었을 때 2가 남고, 5로 나누었을 때 3이 남고, 7로 나누었을 때 2가 남는 수는 무엇인가?
//
//중국문헌 손자산경(孫子算經) 中
//이 문제의 답은 105k+23꼴의 수다. (단, k는 정수)
//
//다시말해 105로 나눈 나머지가 23이면 위의 문제를 만족한다.
//
//이 문제를 일반화하여, n1으로 나누었을 때 r1이 남고, n2로 나누었을 때 r2가 남고, n3로 나누었을 때 r3가 남는 수를 n1, n2, n3의 최소공배수로 나눈 나머지를 구해보자.
//
//INPUT
//* Line 1: 입력의 갯수 N (1≤N≤100)
//
//* Line 2~N+1: n1, r1, n2, r2, n3, r3가 입력된다. (0≤n1,n2,n3≤2000, 0≤r1<n1, 0≤r2<n2, 0≤r3<n3)
//
//OUTPUT
//* Line 1~N: (n1, n2, n3의 최소공배수)와 (x를 n1, n2, n3의 최소공배수로 나눈 나머지)를 출력한다.
//
//SAMPLE INPUT
//2
//3 2 5 3 7 2
//4 1 5 4 6 5
//
//SAMPLE OUTPUT
//105 23
//60 29

#include <stdio.h>

long long int gcd(long long int a, long long int b) {
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main(void)
{
    int N;
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++) {
        long long int num[3], rem[3];
        scanf("%lld %lld %lld %lld %lld %lld", &num[0], &rem[0], &num[1], &rem[1], &num[2], &rem[2]);
        
        long long int prod = num[0] * num[1] / gcd(num[0], num[1]);
        long long int prod_res = prod * num[2] / gcd(prod, num[2]);
        
        long long int j = 0;
        while(1) {
            j++;
            long long int result = num[0] * j + rem[0];
            if(result % num[1] == rem[1] && result % num[2] == rem[2]) {
                printf("%lld %lld\n", prod_res, result%prod_res);
                break;
            }
        }
    }
}
