#include <stdio.h>

int main() {
    int a, b;
    int i;
    int gcd1 = 1;
    int count1 = 0;
    int count2 = 0;

    printf("두 자연수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    // 단순 탐색 방식
    int smaller;

    if (a < b) {
        smaller = a;
    } else {
        smaller = b;
    }

    for (i = 1; i <= smaller; i++) {
        count1++;

        if (a % i == 0 && b % i == 0) {
            gcd1 = i;
        }
    }

    // 유클리드 호제법
    int x = a;
    int y = b;

    while (y != 0) {
        int remainder = x % y;

        x = y;
        y = remainder;

        count2++;
    }

    printf("\n단순 탐색 최대공약수: %d\n", gcd1);
    printf("단순 탐색 연산 횟수: %d회\n", count1);

    printf("\n유클리드 호제법 최대공약수: %d\n", x);
    printf("유클리드 호제법 연산 횟수: %d회\n", count2);

    return 0;
}