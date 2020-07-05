#include <stdio.h>
#include <string.h>

int main() {
    char name[101];
    int N;
    scanf("%s %d", name, &N);
    int len = strlen(name);
    
    for(int i = 0; i < N; i++) {
        char name1[101];
        scanf("%s", name1);
        
        int len2 = strlen(name1);
        if(len2 == len) {
            int sw = 0;
            
            for(int j = 0; j < len2; j++) {
                if(name[j] != 42 && name[j] != name1[j]) {
                    sw = 1;
                    break;
                }
            }
            if(sw == 0) {
                printf("%s\n", name1);
            }
        }
    }
}
