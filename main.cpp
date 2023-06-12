#include <stdio.h>

//N 줄인 삼각형을 출력한다. 단, 사용자 로부터 임의의 N 을 입력 받는다. 아래는 N = 3 일 때의 출력 예시 이다.

int main() {
    int i, j, n, k = 0;
    scanf("%d",&n);

    for(i = 1; i <= n; ++i, k = 0)
    {
        for(j = 1; j <= n-i; ++j)
        {
            printf(" ");
        }

        while(k != 2 * i-1)
        {
            printf("*");
            ++k;
        }

        printf("\n");
    }

    return 0;
}
