#include <stdio.h>

int main ()
{
    long long n;
    scanf("%I64d", &n);
    int count = 0;
    long long x = n;
    while(x > 0)
    {
        if(x%10 == 4 || x%10 == 7)
            count++;
        x = x/10;
    }
        printf("%s", count == 4 || count == 7 ? "YES" : "NO");
    return 0;
}