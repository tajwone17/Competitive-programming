#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int upper;
    int lower;
    upper = 0;
    lower = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            upper++;
        else
            lower++;
    }
    for (int j = 0; j < len; ++j)
    {
        if (upper > lower && s[j] <= 122 && s[j] >= 97)
        {
            s[j] = s[j] - 32;
        }
        else if (lower > upper && s[j] >= 65 && s[j] <= 90)
        {
            s[j] = s[j] + 32;
        }
        else if (lower == upper && s[j] >= 65 && s[j] <= 90)
            s[j] = s[j] + 32;
    }
    printf("%s", s);
}