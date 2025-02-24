#include <stdio.h>

int main()
{
    char str1[101], str2[101];
    scanf("%s", str1);
    scanf("%s", str2);

    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        char c1 = str1[i], c2 = str2[i];

        if (c1 >= 'A' && c1 <= 'Z')
            c1 = c1 + 32;

        if (c2 >= 'A' && c2 <= 'Z')
            c2 = c2 + 32;

        if (c1 < c2)
        {
            printf("-1\n");
            return 0;
        }
        else if (c1 > c2)
        {
            printf("1\n");
            return 0;
        }
        i++;
    }

    printf("0\n");

    return 0;
}
