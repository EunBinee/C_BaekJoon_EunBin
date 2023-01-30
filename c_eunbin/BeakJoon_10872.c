#include <stdio.h>

int Factorial(int num);

int main()
{
    // 백준 10872번 팩토리얼 문제 - 단계별 풀어보기: 재귀

    int num = 0;

    scanf("%d", &num);

    printf("%d", Factorial(num));

    return 0;
}

int Factorial(int num)
{
    if (num <= 1)
        return 1;
    else
        return num * Factorial(num - 1);
}