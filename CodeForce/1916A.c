#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
     int size, n;
        scanf("%d%d", &size, &n);
        int b;
     
        long long p = 1;
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &b);
            p = p * b;
        }

        if (2023 % p == 0)
        {
            printf("YES\n");
            printf("%lld ",2023 / p);
        
            for (int i = 1; i < n; i++)
            {
               printf("1 ");
            }
           printf("\n");
           
        }
        else
        {
            printf("NO\n");
        }
    }
}