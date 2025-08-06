#include <iostream>

int minimum_table[10000001];

int main() {

    minimum_table[0] = 0;
    minimum_table[1] = 0;
    minimum_table[2] = 1;
    minimum_table[3] = 1;

    int n = 0, count = 0;
    std::cin >> n;

    for (int i = 4; i <= n; ++i)
    {
        minimum_table[i] = minimum_table[i - 1] + 1; // 무조건 1을 마이너스한 경우가 기본
        if (i % 2 == 0)
        {
            minimum_table[i] = std::min(minimum_table[i], minimum_table[i / 2] + 1); // 2로 나눈경우가 더 최소라면
        }
        if (i % 3 == 0)
        {
            minimum_table[i] = std::min(minimum_table[i], minimum_table[i / 3] + 1); // 3으로 나눈경우가 더 최소라면
        }
    }

    printf("%d\n", minimum_table[n]); // 최종 출력

    return 0;
}