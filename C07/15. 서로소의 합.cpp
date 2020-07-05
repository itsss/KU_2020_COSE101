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
        long long int kep=0;
        
        scanf("%d", &n);
        kep = n; // 기존의 N 값을 저장
        
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
        printf("%lld\n", ret/2*kep); // 구한 서로소 정수의 개수를 2로 나누고, n을 곱하면 서로소의 합
    }
}
