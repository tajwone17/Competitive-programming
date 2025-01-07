#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    int S = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int k = max - arr[i];

        S = S + k;
    }
    if (n == 1)
        printf("0");
    else
        printf("%d\n", S);
}
