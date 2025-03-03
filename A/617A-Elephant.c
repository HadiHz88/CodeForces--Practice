#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int big_steps = n / 5;
    if (n % 5 != 0)
        big_steps++;

    printf("%d", big_steps);

    return 0;
}