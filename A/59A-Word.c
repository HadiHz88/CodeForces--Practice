#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool lower_upper(char* word, int len) {
    int count_lower = 0;
    int count_upper = 0;
    
    for (int i = 0; i < len; i++) {
        if (islower(word[i])) {
            count_lower++;
        } else if (isupper(word[i])) {
            count_upper++;
        }
    }
    
    return count_lower >= count_upper;
}


void to_lower(char* word, int len) {
    for (int i = 0; i < len; i++) {
        if (isupper(word[i])) {
            word[i] = tolower(word[i]);
        }
    }
}

void to_upper(char* word, int len) {
    for (int i = 0; i < len; i++) {
        if (islower(word[i])) {
            word[i] = toupper(word[i]);
        }
    }
}

int main() {
    char word[101];
    scanf("%s", word);
    int len = strlen(word);
    
    if (lower_upper(word, len))
        to_lower(word, len);
    else
        to_upper(word, len);


    printf("%s", word);
    return 0;
}