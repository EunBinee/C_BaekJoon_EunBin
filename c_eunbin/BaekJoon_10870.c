#include <stdio.h>

int Fibonacci(int num);

int main()
{
    // ���� 10870�� �Ǻ���ġ �� ���� - �ܰ躰 Ǯ���: ���
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