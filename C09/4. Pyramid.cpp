#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    for(int i = 0; i <= a-'A'; i++) {
        for(int j = a-'A'-i; j > 0; j--) printf(" ");
        for(int j = 0; j <= i; j++) printf("%c", j+'A');
        for(int j = i-1; j >= 0; j--) printf("%c", j+'A');
        printf("\n");
    }
}