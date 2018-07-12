#include <stdio.h>

int main() {
    int m, n, kase = 0;
    while(scanf("%d%d", &n, &m)) {
        double s = 0;
        if ((n || m) == 0) {
            break;
        }
        for (long i = n; i < m + 1; i++) {
            s += (double)1/(i*i);
        }
        printf("%s %d: %.5f\n", "Case", ++kase, s);
    }
    return 0;
}