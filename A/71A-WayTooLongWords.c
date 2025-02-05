#include <stdio.h>
#include <string.h>
#define limit 10

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char word[100];
        scanf("%s", word);
        int len = strlen(word);

        if (limit < len)
            printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
        else
            printf("%s\n", word);
    }

    return 0;
}