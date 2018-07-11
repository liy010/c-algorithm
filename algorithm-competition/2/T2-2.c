#include <stdio.h>

int main() {
    int a, b, c, n = 0, kase=0;
    while (scanf("%d", &n) == 1 && n) {
        scanf("%d%d%d", &a, &b, &c);
        for (int x = 1; x < 34; x++) {
            int a1 = 3 * x + a;
            for (int y = 1; y < 21; y++) {
                int b1 = 5 * y + b;
                for (int z = 0; z < 15; z++) {
                    int c1 = 7 * z + c;
                    if (a1 == b1 == c1 && a1 >= 10 && a1 <= 100) {
                        printf("Case %d: %d\n", ++kase, a1);
                        return 0;
                    }
                }
            }
        }
    }
    printf("Case %d: %s\n", ++kase, "No answer");
    return 0;
}