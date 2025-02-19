#include <stdio.h>

int main() {
    int n, k, tmp,count = 0;
    scanf("%d %d", &n, &k);
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= scores[k - 1] && scores[i] > 0)
        {
            count++;
        }
    }
    printf("%d", count);
}