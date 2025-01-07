#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int one = n / 2;
    

    if (one % 3 == 0)
    {
        one++;
    }
    int two = (n - one) / 2;
    int three = (n - (one + two));
    while (two % 3 == 0 || three % 3 == 0)
    {
        two++;
        three--;
    }

    printf("%d %d %d", one, two, three);
}