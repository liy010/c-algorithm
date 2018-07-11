#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int m = (n - i) * 2 - 1;
        for (int i1 = 0; i1 <= i; i1++)
            printf("%s", " ");
        for (int i2 = 0; i2 < m; i2++)
            printf("%s", "#");
        printf("\n");
    }
}