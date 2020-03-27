#include <stdio.h>
#include <string.h>

int main()
{
    char str[21];
    int a;
    float b;
    scanf("%s %d %f", str, &a, &b);
    str[strlen(str)+1] = '\0';
    printf("%-10s\n%03d\n%.2f", str, a, b);
}
