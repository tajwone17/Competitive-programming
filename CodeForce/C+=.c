#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, n;
        scanf("%d %d %d", &a, &b, &n);
        int step = 0;
        while (a <= n && b <= n)
        {
            if (a < b)
            {
                a += b;
            }
            else
            {
                b += a;
            }
            step++;
            
        }
        printf("%d\n", step);
    }
    return 0;
}