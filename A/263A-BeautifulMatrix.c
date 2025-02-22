#include <stdio.h>

int abs(int x)
{
    return x > 0 ? x : -x;
}

int main()
{
    int arr[5][5];
    int row = 0, col = 0, moves = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    moves = abs(row - 2) + abs(col - 2);
    printf("%d", moves);

    return 0;
}
