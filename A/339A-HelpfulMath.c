#include <stdio.h>
#include <string.h>

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void Arrange(char* s, int n) {
    for (int i = 0; i < n - 1; i += 2) {
        for (int j = 0; j < n - i - 1; j += 2) {
            if (s[j] > s[j + 2]) {
                swap(&s[j], &s[j + 2]);
            }
        }
    }
}

int main() {
    char s[101];
    
    scanf("%s", s);
    int n = strlen(s);
    
    Arrange(s, n);

    printf("%s", s);
    
    return 0;
}