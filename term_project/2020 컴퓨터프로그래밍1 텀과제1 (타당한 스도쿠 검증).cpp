#include <stdio.h>
 
int arr[9][9];

#define bool _Bool
#define false 0
#define true 1
 
bool vaild1() {
    for(int j = 0; j < 9; j++) {
        bool chk[9] = {false};
        for(int i=0; i<9; i++) chk[arr[i][j] - 1] = true;
        for(int i=0; i<9; i++) if(!chk[i]) return false;
    }
    return true;
}
 
bool vaild2() {
    for(int i = 0; i < 9; i++) {
        bool chk[9] = {false};
        for(int j=0; j<9; j++) chk[arr[i][j] - 1] = true;
        for(int i=0; i<9; i++) if(!chk[i]) return false;
    }
    return true;
}
 
bool vaild3() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            bool chk[9] = {false};
            chk[arr[i*3][j*3] - 1] = true;
            chk[arr[i*3][j*3+1] - 1] = true;
            chk[arr[i*3][j*3+2] - 1] = true;
            chk[arr[i*3+1][j*3] - 1] = true;
            chk[arr[i*3+1][j*3+1] - 1] = true;
            chk[arr[i*3+1][j*3+2] - 1] = true;
            chk[arr[i*3+2][j*3] - 1] = true;
            chk[arr[i*3+2][j*3+1] - 1] = true;
            chk[arr[i*3+2][j*3+2] - 1] = true;
            for(int k = 0; k < 9; k++) if(!chk[i]) return false;
        }
    }
    return true;
}
 
int main(void) {
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    if(vaild1() && vaild2() && vaild3()) printf("true");
    else printf("false");
}