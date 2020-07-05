#include <stdio.h>
#include <ctype.h>
#include <string.h>

char restriction[22][10] = {"break", "do", "double", "if", "else", "for", "float", "void", "int", "while", "char", "long", "return", "short", "signed", "sizeof", "static", "struct", "switch", "continue", "case", "unsigned"};

int main() {
    int N;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        int sw = 0;

        char arr[20];
        scanf(" %[^\n]s", arr);
        
        if(isdigit(arr[0])) sw = 1;
        for (int j = 0; j < strlen(arr); j++) {
            if(!isalnum(arr[j]) && arr[j] != '_') sw = 1;
        }
        for(int j = 0; j < 22; j++) {
            if(!strcmp(arr, restriction[j])) sw = 1;
        }
        if(sw == 0) printf("true\n");
        else printf("false\n");
    }
}
