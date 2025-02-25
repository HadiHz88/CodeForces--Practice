#include <stdio.h>
#include <string.h>

int countDistinctCharacters(char *str)
{
    int count = 0, i = 0;
    int times[26] = {0};

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            int index = str[i] - 'a';
            times[index]++;
        }
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (times[i] > 0)
            count++;
    }

    return count;
}

int main()
{
    char str[101];
    scanf("%s", str);
    printf("%s\n", countDistinctCharacters(str) % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}
