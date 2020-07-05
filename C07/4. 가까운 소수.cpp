#include <stdio.h>

int prime_val(int num) {
    for(int i = 2; i*i <= num; i++) {
        if(num%i==0) return 0;
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        int p;
        scanf("%d", &p);
        
        if(p%2 == 0) {
            for(int i = 1; ; i += 2) {
                if(p-i > 0) {
                    if(prime_val(p-i) | prime_val(p+i)) {
                        if(prime_val(p-i) & prime_val(p+i)) printf("%d %d", p-i, p+i);
                        else if(prime_val(p-i)) printf("%d", p-i);
                        else if(prime_val(p+i)) printf("%d", p+i);
                        break;
                    }
                }
                else if(prime_val(p+i)) {
                    printf("%d", p+i);
                    break;
                }
            }
        }
        
        else {
            if(prime_val(p)) printf("%d", p);
            else {
                for(int i = 2; ; i += 2) {
                    if(p-i > 0) {
                        if(prime_val(p-i) | prime_val(p+i)) {
                        if(prime_val(p-i) & prime_val(p+i)) printf("%d %d", p-i, p+i);
                        else if(prime_val(p-i)) printf("%d", p-i);
                        else if(prime_val(p+i)) printf("%d", p+i);
                        break;
                        }
                    }
                    else if(prime_val(p+i)) {
                        printf("%d", p+i);
                        break;
                    }
                }
            }
        }
        printf("\n");
    }
}
