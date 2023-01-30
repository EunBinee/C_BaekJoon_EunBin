#include <stdio.h>
#include <string.h>

int count = 0;
int recursion(const char *s, int l, int r);
int isPalindrome(const char *s);

int main()
{
    int loopNum = 0;
    char s[1001];

    scanf("%d", &loopNum);

    for (int i = 0; i < loopNum; i++)
    {
        scanf("%s", &s);
        printf("%d ", isPalindrome(s));
        printf("%d\n", count);
    }

    return 0;
}

int recursion(const char *s, int l, int r)
{
    count++;
    if (l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else
        return recursion(s, l + 1, r - 1);
}
int isPalindrome(const char *s)
{
    count = 0;
    return recursion(s, 0, strlen(s) - 1);
}