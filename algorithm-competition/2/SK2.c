#include <stdio.h>
#include <math.h>

int main() {
    double i;
    // for(i = 0; i != 10.0; i += 0.1) //浮点数不能直接比较
    //     printf("%.1f\n", i);
    for(i = 0; fabs(i - 10.0) >= 1e-5; i += 0.1) //这样比较可以， 或者直接i < 10 更简洁
        printf("%.1f\n", i);
    return 0;
}