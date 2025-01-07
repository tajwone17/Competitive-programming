#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        int profits[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &profits[i]);
        }

        int total = 0;
       
        for (int i = 0; i < N; i++)
        {
            total += profits[i];
        }

        int min=profits[0];
          for (int i = 1; i < N; i++)
        {
            if(min>profits[i]){
                min=profits[i];
            }
        }
        int maxProfit=total-min;

        
        printf("%d\n", maxProfit);
    }

    return 0;
}
