#include <stdio.h>

int main() {
    int k, n, w;

    scanf("%d %d %d", &k, &n, &w);
    int total = 0;

    for (int i = 1; i <= w; i++)
        total += k * i;

    printf("%d", total > n ? total - n : 0);
    
    return 0;
}