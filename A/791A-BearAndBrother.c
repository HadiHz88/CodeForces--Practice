#include <stdio.h>

int calculateYears(int a, int b){
    int years = 0;
    while(a <= b){
        a *= 3;
        b *= 2;
        years++;
    }
    return years;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", calculateYears(a, b));
    return 0;
}