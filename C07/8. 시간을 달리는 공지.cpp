#include <stdio.h>
int D, H, M;
int main(void) {
    int a,b,c,d,e,f,g,h;
    scanf("%d %d %d %d %d %d %d %d",&a, &b, &c, &d, &e, &f, &g, &h);
    for(int i = a; i < e; i++) {
        if(i==2) D+=28;
        else if(i==4 || i==6 || i==9 || i==11) D+=30;
        else D+=31;
    }
    D = D-b+f, D *= 2;
    H = c-g, M = d-h;
    if(M < 0) H-=1, M+=60;
    if(H < 0) D-=1, H+=24;
    printf("%d %d %d\n",D,H,M);
}
