#include<stdio.h>
int arr[201][201];
 
int main() {
    int n, m, r=1, c=1, d=0;
    scanf("%d %d",&m,&n);
    for(int k=1; k<=n*m; k++)
    {
        arr[r][c] = k;
        if(d == 0) {
            if(c == m || arr[r][c+1]) {
                d = 1;
                r++;
            }
            else c++;
        }
    
        else if(d == 1) {
            if(r == n || arr[r+1][c]) {
                d = 2;
                c--;
            }
            else r++;
        }
    
        else if(d == 2)
        {
            if(c == 1 || arr[r][c-1]) {
                d = 3;
                r--;
            }
            else c--;
        }
        
        else
        {
            if(r == 1 || arr[r-1][c])  {
                d = 0;
                c++;
            }
            else r--;
        }
    }
    for(int i=1; i<=n; i++, printf("\n"))
        for(int j=1;j<=m;j++) {
            printf("%d", arr[i][j]);
            if(j<=m-1) printf(" "); // avoid PE.
        }
    return 0;
}