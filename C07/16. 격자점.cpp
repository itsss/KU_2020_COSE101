#include <stdio.h>
#include <math.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int ab_conv(int a) {
    return a < 0 ? -a : a;
}

int main() {
    int N;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        int x_1, y_1, x_2, y_2, x_3, y_3;
        scanf("%d %d %d %d %d %d", &x_1, &y_1, &x_2, &y_2, &x_3, &y_3);
        double a = sqrt((x_1-x_2)*(x_1-x_2)+(y_1-y_2)*(y_1-y_2));
        double b = sqrt((x_1-x_3)*(x_1-x_3)+(y_1-y_3)*(y_1-y_3));
        double c = sqrt((x_3-x_2)*(x_3-x_2)+(y_3-y_2)*(y_3-y_2));
        double d = sqrt(((a+b+c)/2.0)*(((a+b+c)/2.0)-a)*(((a+b+c)/2.0)-b)*(((a+b+c)/2.0)-c));
        
        if(x_2 > x_3) {
            swap(&x_2,&x_3);
            swap(&y_2,&y_3);
        }
        if(x_1 > x_2) {
            swap(&x_1,&x_2);
            swap(&y_1,&y_2);
        }
        if(x_2 > x_3) {
            swap(&x_2,&x_3);
            swap(&y_2,&y_3);
        }
        
        int tmp = 3;
        if(x_1 == x_2) tmp += ab_conv(y_1-y_2)-1;
        else for(int x = x_1+1; x < x_2; x++) if((y_2-y_1)*(x_2-x)==(y_2-(int)(y_2 - (y_2-y_1)*(x_2-x)*1./(1.*(x_2-x_1))))*(x_2-x_1)) tmp++;

        if(x_1 == x_3) tmp += ab_conv(y_1-y_3)-1;
        else for(int x = x_1+1; x < x_3; x++) if((y_3-y_1)*(x_3-x)==(y_3-(int)(y_3 - (y_3-y_1)*(x_3-x)*1./(1.*(x_3-x_1))))*(x_3-x_1)) tmp++;
        
        if(x_2 == x_3) tmp += ab_conv(y_3-y_2)-1;
        else for(int x = x_2+1; x < x_3; x++) if((y_3-y_2)*(x_3-x)==(y_3-(int)(y_3 - (y_3-y_2)*(x_3-x)*1./(1.*(x_3-x_2))))*(x_3-x_2)) tmp++;
        
        d = d + tmp/2. + 1;
        if(d > 0) {
            printf("%.0lf\n", d);
        }
        else printf("0\n");
    }
}
