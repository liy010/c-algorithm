#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    //任务1
    // for (int i = 1; i <= n; i++) 
    //     printf("%d\n", 2*i);
    //任务2
    for (int i = 2; i <= 2*n; i += 2) 
        printf("%d\n", i);
    return 0;
}