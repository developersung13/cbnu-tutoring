#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int k=0; k < n; k++) {
        for (int z=n-k; z > 0; z--)
            printf("*");
        puts("");
    } return 0;
}