#include <stdio.h>
int main()
{
    int p, t;
    scanf("%d%d", &p, &t);

    int rt = 240 - t;
    int sum = 0;
    int i, index = 0;
    ;
    for (i = 1; sum <= rt; i++)
    {
        sum = sum + i * 5;
        index = i - 1;
    }
    if (index > p)
        index = p;

    printf("%d\n", index);
}