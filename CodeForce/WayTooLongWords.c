#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        int length = strlen(s);
        if (length > 10)
        {
            printf("%c%d%c\n", s[0], length - 2, s[length - 1]);
        }
        else
        {
            printf("%s\n", s);
        }
    }
}