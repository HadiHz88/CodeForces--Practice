#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    char str[101];
    scanf("%s", str);
    
    for (int i = 0; i < n - 1; i++) {
        while (str[i] == str[i+1]) {
            count++;
            i++;
            if (i >= n - 1)
                break;
        }
    }
    printf("%d", count);
    return 0;
}
