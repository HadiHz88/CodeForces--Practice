#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < k && n > 0; i++)
    {
        if (n % 10 != 0)
            n--;
        else
            n /= 10;
    }
    printf("%d", n);
    return 0;
}