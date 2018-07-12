#include <stdio.h>
#include <time.h>

int main() {
    for (int a=1; a <=3; a++) {
        for (int b = 1; b <= 9; b++) {
            if (b == a)
                continue;
            for (int c = 1; c <= 9; c++) {
                if (c == a || c == b)
                    continue;
                int abc = a * 100 + b * 10 + c;
                if (abc < 333) {
                    int def = abc * 2;
                    int ghi = abc * 3;
                    if (def < 666 && ghi < 999) {
                        int d = def / 100;
                        int e = def /10 %10;
                        int f = def % 10;
                        int g = ghi / 100;
                        int h = ghi / 10 % 10;
                        int i = ghi % 10;
                        if ((a + b + c + d + e + f + g + h + i) == 45 &&
                            (a * b * c * d * e * f * g * h * i) == 2*3*4*5*6*7*8*9)
                            printf ("%d %d %d\n", abc, def, ghi);
                    }
                }
            }
        }
    }
}