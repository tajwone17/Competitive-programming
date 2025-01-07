#include <stdio.h>
#include <math.h>
int main()
{
    int t;

    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int ai;
            scanf("%d", &ai);
            sum += ai;
        }
       long long int sqr = sqrt(sum);

        if (sum == sqr * sqr)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
