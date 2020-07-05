#include <stdio.h>

int gcd(int a, int b) {

  while (b != 0) {
    int temp = a % b;
    a = b;
    b = temp;
  }

  return a < 0 ? -a : a;
}

int main()
{
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        int a, b, d;
        scanf("%d %d %d", &a, &b, &d);
        if(!(d % gcd(a, b) != 0)) {
            for(int i = 1; ; i++) {
                if((d - a*i) % b == 0) {
                    int j = (d-a*i)/b;
                    printf("(%d, %d)\n", i, j);
                    break;
                }
            }
        }
        else printf("IMPOSSIBLE\n");
    }
}
