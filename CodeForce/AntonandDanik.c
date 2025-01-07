#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n + 1];
    int a = 0;
    int d = 0;
       scanf("%s", s);
    for (int i = 0; i < n; i++)
    {
     
        if (s[i] == 'A')
            a++;
        else
            d++;
    }
    if (a > d)
        printf("Anton");
    else if (d > a)
        printf("Danik");
    else
        printf("Friendship");
}