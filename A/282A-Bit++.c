#include <stdio.h>

int main()
{
    int n, x = 0;
    scanf("%d", &n);
    char op[4];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", op);
        if (op[1] == '+')
            x++;
        else if (op[1] == '-')
            x--;
            
    }

    printf("%d", x);
}