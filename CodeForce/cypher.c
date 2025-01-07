#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            int m;
            scanf("%d", &m);
            char s[m];
            scanf("%s", s);
            for (int j = 0; j < m; j++)
            {
                if (s[j] == 'U')
                    arr[i] = arr[i] + 1;
                else if (s[j] == 'D')
                    arr[i] = arr[i] - 1;
                if (arr[i] < 0)
                    arr[i] = arr[i] + 10;
                if (arr[i] > 9)
                    arr[i] = arr[i] - 10;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d", arr[i]);
        }
    }
}