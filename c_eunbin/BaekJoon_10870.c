#include <stdio.h>

int Fibonacci(int num);

int main()
{
    // 백준 10870번 피보나치 수 문제 - 단계별 풀어보기: 재귀
    int num = 0;

    scanf("%d", &num);
    printf("%d", Fibonacci(num));

    return 0;
}

int Fibonacci(int num)
{
    if (num == 0)
        return 0;
    else if (num <= 1)
        return 1;

    return Fibonacci(num - 1) + Fibonacci(num - 2);
}