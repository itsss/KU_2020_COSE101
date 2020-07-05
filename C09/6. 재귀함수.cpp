#include <stdio.h>

void B(int a);
void A(int a){
    if(a<=0)return;
    printf("A");
    return a%2==0?A(a/2):B(a-1);
}
void B(int a){
    if(a<=0)return;
    printf("B");
    return a%3==0?B(a/3):A(a-1);
}

int main() {
    int N;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        int a;
        scanf("%d", &a);
        A(a);
        printf("\n");
    }
}
