#include <stdio.h>

int main()
{
    int arr[5][5];
    int i, j;
    int r = 0, c = 0, m = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }
    if (r > 2)
        r = r - 2;
    else
        r = 2 - r;

    if (c > 2)
        c = c - 2;
    else
        c = 2 - c;
    printf("%d\n", c + r);
}
