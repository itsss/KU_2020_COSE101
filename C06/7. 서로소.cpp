//DESCRIPTION
//두 수의 최대공약수가 1인 것을 서로소라고 한다.
//
//1이상 n이하의 수 중 n과 서로소인 정수의 갯수를 구해보자.
//
//INPUT
//Line 1: 입력의 갯수 N
//
//Line 2~N+1: 자연수 n
//
//OUTPUT
//1~N: n과 서로소면서 n을 넘지 않는 양의 정수 갯수를 출력한다.
//
//SAMPLE INPUT
//3
//24
//36
//47
//
//SAMPLE OUTPUT
//8
//12
//46
//
//HINT
//만약 TLE가 발생한다면 오일러 파이 함수에 대해 알아보자.

#include <stdio.h>

int arr[100001];

void preprocess() {
    int cnt = 4;
    arr[0] = 2;
    arr[1] = 3;
    arr[2] = 5;
    arr[3] = 7;
    
    for(int i = 11; i <= 10000; i++) {
        int sw = 0;
        for(int j = 0; arr[j]*arr[j] <= i; j++) {
            if(i % arr[j] == 0) {
                sw = 1;
                break;
            }
        }
        if(sw==0) arr[cnt++] = i;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    preprocess(); //오일러 피 함수 1
    
    for(int i = 0; i < N; i++) {
        int n;
        long long int ret=1;
        
        scanf("%d", &n);
        
        for(int j = 0; ; j++) { // 오일러 피 함수 2
            long long int prime = 1;
            while(n % arr[j] == 0) {
                n /= arr[j];
                prime *= arr[j];
            }
            if(prime != 0) {
                ret *= (prime - (prime / arr[j]));
            }
            if(n == 1) break;
        }
        printf("%lld\n", ret);
    }
}
