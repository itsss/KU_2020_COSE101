#include <stdio.h>
 
int A,B,N;
char s[63];
int s2[63];
 
void preprocess() {
    for(int i = 0; i < 10; i++) s[i] = i+48;
    for(int i = 10; i < 36; i++) s[i] = i+55;
    for(int i = 36; i < 62; i++) s[i] = i+61;
}
 
int main(void)
{
    scanf("%d", &N);
    preprocess();
    for(int a = 0; a < N; a++) {
        scanf("%d %d",&A,&B);
        int i = 0;
        while(A)
        {
            s2[i++]=s[A%B];
            A/=B;
        }
        for(int j = i-1; j >= 0; j--) printf("%c",s2[j]);
        printf("\n");
    }
}