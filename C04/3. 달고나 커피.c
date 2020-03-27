/*
 DESCRIPTION
 조교가 달고나 커피를 만들려고 한다. 달고나 커피를 만드는 방법은 다음과 같다.

 1. 원두와 뜨거운 물의 부피비를 a:b로 하여 에스프레소를 추출한다. 에스프레소는 원두에 뜨거운 물을 통과시켜서 추출하며, 원두는 100% 걸러진다.

 2. 1에서 추출한 에스프레소, 설탕, 뜨거운 물을 n:m:l 부피비로 섞고 거품이 될 때까지 수백번 젓는다.

 3. 2에서 만든 거품과 뜨거운 물을 x:y 부피비로 넣으면 달고나 커피가 된다.

 달고나 커피를 부피 X만큼 만들려고 할 때, 원두, 설탕, 뜨거운 물은 각각 얼마나 필요한지 계산해보자.

 INPUT
 * Line 1 : 에스프레소 추출에 필요한 원두와 뜨거운 물의 부피비 a, b가 입력된다. (1≤a,b≤10000)

 * Line 2 : 거품 만들 때 필요한 에스프레소, 설탕, 뜨거운 물의 부피비 n, m, l이 입력된다. (1≤n,m,l≤10000)

 * Line 3 : 달고나 커피를 만들 때 필요한 거품, 뜨거운 물의 부피비 x, y가 입력된다. (1≤x,y≤10000)

 * Line 4 : 만들려는 달고나 커피의 부피 X가 입력된다. (1≤X≤1000000)

 OUTPUT
 * Line 1: 필요한 원두의 부피를 소수점 셋째자리에서 올림한 값

 * Line 2: 필요한 설탕의 부피를 소수점 셋째자리에서 올림한 값

 * Line 3: 필요한 뜨거운 물의 부피를 소수점 셋째자리에서 올림한 값

 SAMPLE INPUT
 1 4
 2 2 3
 1 3
 300
 
 SAMPLE OUTPUT
 5.36
 21.43
 278.58
 
 HINT
 소수점 첫째자리에서 올림하는 함수:

 C, C++: ceil (#include<math.h>)

 C#: Math.Ceiling (using System.Math)

 Java: Math.ceil (import java.lang.Math)

 Python: math.ceil (import math)

  

 소수점 첫째자리에서 내림하는 함수:

 C, C++: floor (#include<math.h>)

 C#: Math.Truncate (using System.Math)

 Java: Math.floor (import java.lang.Math)

 Python: math.floor (import math)

  

 버림:

 버림은 양수를 내림, 음수를 올림한 값입니다.

 소수점 첫째자리에서 버림하려면 실수형을 정수형으로 바꿔주기만 하면 됩니다.
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, n, m, l, x, y, X;
    scanf("%d %d %d %d %d %d %d %d", &a, &b, &n, &m, &l, &x, &y, &X);

    double water, bubble, esp, sug, wdu;

    water = ((X) / (double)(x + y)) * y;
    bubble = ((X) / (double)(x + y)) * x;

    esp = ((bubble) / (double)(n+m+l)) * n;
    sug = ((bubble) / (double)(n+m+l)) * m;
    water += ((bubble) / (double)(n+m+l)) * l;

    wdu = ((esp) / (double)(b)) * a;
    water += ((esp) / (double)(b)) * b;

    wdu = wdu * 100;
    wdu = ceil(wdu);
    wdu = wdu / 100;

    sug = sug * 100;
    sug = ceil(sug);
    sug = sug / 100;

    water = water * 100;
    water = ceil(water);
    water = water / 100;

    printf("%.2lf\n%.2lf\n%.2lf", wdu, sug, water);
}
