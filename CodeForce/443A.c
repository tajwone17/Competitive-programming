#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int count = 0;
    for (int i = 0; i < strlen(s); i=i++)
    {
        for (int j = 0; j < i; j=j++)
        {
            if (s[i]>96 && s[i]<106 && s[j]>96 && s[j]<106){
            if (s[i] != s[j])
            {
                count++;
            }}
        }
    }
    printf("%d",count-4);
}