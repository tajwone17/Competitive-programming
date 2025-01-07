#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        int count = 0;
        int res = 0;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                count++;

            if (arr[i] == 1)
            {
                if (count > res)
                    res = count;
                count = 0;
            }
        }
        if (res > count)
            printf("%d\n", res);
        else
            printf("%d\n", count);
    }
}
