#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int count = 0;

        scanf("%d", &n);

        if (n == 1)
            count = 2;
        else if (n == 2 || n == 3)
            count = 1;
        else if (n % 3 == 0)
            count = n / 3;
        else

            count = n / 3 + 1;

        printf("%d\n", count);
    }
}