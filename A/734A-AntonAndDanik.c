#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char str[100001];
    scanf("%s", str);
    int anton = 0, danik = 0;
    
    for (int i = 0; i < n; i++){
        if (str[i] == 'A')
            anton++;
        else
            danik++;
    }

    if (anton > danik)
        printf("Anton");
    else if (anton < danik)
        printf("Danik");
    else
        printf("Friendship");
    return 0;
}