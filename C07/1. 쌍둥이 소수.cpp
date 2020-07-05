#include <stdio.h>

int prime_val(long long int num) {
    for(int i = 2; i*i <= num; i++) {
        if(num%i==0) return 0;
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        long long int P;
        scanf("%lld", &P);
        
        if(P <= 3) printf("3 5\n");
        else if(P <= 5) printf("5 7\n");
        else {
            for(long long int j = ((P+6)/6)*6; ; j += 6) {
                if(prime_val(j-1) && prime_val(j+1)) {
                    printf("%lld %lld\n", j-1, j+1);
                    break;
                }
            }
        }
    }
}
