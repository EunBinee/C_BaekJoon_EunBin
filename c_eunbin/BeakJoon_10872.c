#include <stdio.h>

int Factorial(int num);

int main()
{
    // ���� 10872�� ���丮�� ���� - �ܰ躰 Ǯ���: ���

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