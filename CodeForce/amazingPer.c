#include <stdio.h>

int main()
{
    int n, ap = 0;
    scanf("%d", &n);

    int p[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    int bp = p[0];
    int wp = p[0];

    for (int i = 1; i < n; i++)
    {
        if (bp < p[i])
        {
            bp = p[i];
            ap++;
        }
        else if (wp > p[i])

        {
            wp = p[i];
            ap++;
        }
    }

    printf("%d\n", ap);

    return 0;
}
