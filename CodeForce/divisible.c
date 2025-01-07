#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        int count = 0;
        for (int i = 1; count <= k; i++)
        {
            if (i % n != 0)
                count++;
            if (count == k)
            {
                printf("%d\n", i);
                break;
            }
        }
    }
}
unsolved