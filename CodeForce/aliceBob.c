#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int A1, A2, A3, B1, B2, B3;
        int Alice = 0;
        int Bob = 0;
       
        scanf("%d %d %d %d %d %d", &A1, &A2, &A3, &B1, &B2, &B3);

        if (A1 >= A2 && A1 >= A3)
        {
            if (A2 >= A3)
            {
                Alice = A1 + A2;
            }
            else
            {
                Alice = A1 + A3;
            }
        }
        else if (A2 >= A1 && A2 >= A3)
        {
            if (A1 >= A3)
            {
                Alice = A2 + A1;
            }
            else
            {
                Alice = A2 + A3;
            }
        }
        else
        {
            if (A3 >= A1 && A3 >= A2)
            {
                if (A1 >= A2)
                {
                    Alice = A1 + A3;
                }
                else
                {
                    Alice = A3 + A2;
                }
            }
        }
        if (B1 >= B2 && B1 >= B3)
        {
            if (B2 >= B3)
            {
                Bob = B1 + B2;
            }
            else
            {
                Bob = B1 + B3;
            }
        }
        else if (B2 >= B1 && B2 >= B3)
        {
            if (B1 >= B3)
            {
                Bob = B2 + B1;
            }
            else
            {
                Bob = B2 + B3;
            }
        }
        else
        {
            if (B3 >= B1 && B3 >= B2)
            {
                if (B1 >= B2)
                {
                    Bob = B1 + B3;
                }
                else
                {
                    Bob = B3 + B2;
                }
            }
        }
        if (Alice > Bob)
        {
            printf("Alice\n");
        }
        else if (Bob > Alice)
        {
            printf("Bob\n");
        }
        else
        {
            printf("Tie\n");
        }
    }
    return 0;
}
