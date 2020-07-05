#include <stdio.h>
 
int arr[1001][11], map[101][101];
 
int    atoi(char *str)
{
    int    i;
    int    negativ;
    int    number;
 
    i = 0;
    negativ = 0;
    number = 0;
    while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
        || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
        i++;
    if (str[i] == 45)
        negativ = 1;
    if ((str[i] == 45) || (str[i] == 43))
        i++;
    while (str[i] >= 48 && str[i] <= 57)
    {
        number *= 10;
        number += ((int)str[i] - 48);
        i++;
    }
    if (negativ == 1)
        return (-number);
    else
        return (number);
}
 
int main() {
    int n, m, N, index=0;
    int direction_x[8] = {0, 1, 1, 1, 0, -1, -1, -1}, direction_y[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    scanf("%d %d %d", &n, &m, &N);
 
    for(int i = 0; i < N; i++) {
        char inp[21];
        scanf(" %[^\n]s", inp);
        
        if(inp[0] == 'g') {
            arr[index][0] = 0;
            if(inp[3] == 's') arr[index++][1] = atoi(inp+12);
            else arr[index++][1] = -atoi(inp+8);
        }
        
        else if(inp[1] == 'u') {
            arr[index][0] = 1;
            if(inp[5] == 'r') arr[index++][1] = atoi(inp + 11) / 45;
            else arr[index++][1] = -atoi(inp + 10) / 45;
        }
        
        else if (inp[0] == 't') {
            arr[index][0] = 2;
            if (inp[5] == 'a') arr[index++][1] = atoi(inp+9);
            else arr[index++][1] = -atoi(inp+14);
        }
        
        else index--;
    }
    
    int tmp = 2, x = 0, y = 0;
    for(int i = 0; i < index; i++) {
        switch(arr[i][0]) {
            case 0:
                x += direction_x[tmp] * arr[i][1];
                y += direction_y[tmp] * arr[i][1];
                break;
            case 1:
                tmp = (tmp + arr[i][1] + 8) % 8;
                break;
            case 2:
                map[y][x] += arr[i][1];
                break;
        }
    }
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(j < n-1) printf("%d ", map[i][j]); // Avoid PE.
            else printf("%d\n", map[i][j]);
        }
    }
}
