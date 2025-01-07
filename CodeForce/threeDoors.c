#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        int flag = 0;
        scanf("%d", &x);
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &arr[i]);
        }
        int y = arr[x];
        if (arr[x-1] != 0 && arr[y-1] != 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}