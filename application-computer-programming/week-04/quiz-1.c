#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int nullCharIdx = 0;
    char str[MAX_SIZE];
    scanf("%[^n]s", str);
    for (int k=0; k < MAX_SIZE; k++) {
        if (str[k] == '\0') {
            nullCharIdx = k;
            break;
        }
    }
    
    for (int k=nullCharIdx; k >= 0; k--)
        printf("%c", str[k]);
    return 0;
}