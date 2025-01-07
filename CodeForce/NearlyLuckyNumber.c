#include <stdio.h>
#include <string.h>
int main()
{

    long long number;
    scanf("%lld", &number);
    int ln = 0;
    while (number > 0)
    {
        int lnum = number % 10;
        if (lnum == 4 || lnum == 7)
        {
            ln++;
        }
        number=number/10;
    }
    if (ln == 4 || ln == 7 )
        printf("YES\n");
    else
        printf("NO\n");
}