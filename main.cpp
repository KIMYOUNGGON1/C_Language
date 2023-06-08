/* 논리 연산자 */
#include <stdio.h>

int main() {
    int i, sum = 0;
    for (i = 0; i < 20; ++i) {
        sum = sum + i;
    }
    printf("1 부터 19 까지의 합 : %d", sum);
    return 0;
}
