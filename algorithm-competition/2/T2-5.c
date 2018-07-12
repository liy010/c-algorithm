#include <stdio.h>

int main() {
    int a, b, kase=0, c;
    while(scanf("%d%d%d", &a, &b, &c)) {
        if (a == 0 && b == 0 && c == 0) 
            break;
        if (b == 0) 
            printf("%s", "b 不能为0");
        long double m;
        m = (long double)a/b;
        printf("%s %d: %.*Lf\n", "Case", ++kase, c, m);
    }
    return 0;
}