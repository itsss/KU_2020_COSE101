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
