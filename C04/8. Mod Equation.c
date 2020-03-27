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
    int n, a, b, r, c, d, s;
    scanf("%d %d %d %d %d %d %d", &n, &a, &b, &r, &c, &d, &s);
    if(gcd((a*d)-(b*c), n) == 1)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int x = i;
                int y = j;
                int eq1 = (a*x+b*y)%n;
                int eq2 = (c*x+d*y)%n;

                if(eq1 < 0) eq1 += n; // Exception
                if(eq2 < 0) eq2 += n;

                if(eq1 == r && eq2 == s)
                {
                    printf("%d\n%d", x, y);
                    break;
                }
            }
        }
    }
}
