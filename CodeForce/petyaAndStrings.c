#include <stdio.h>
#include <string.h>
int main()
{
    char str1[101];
    char str2[101];
    gets(str1);
    gets(str2);
    int len = strlen(str1);

    for (int i = 0; i < len; i++)
    {

        if (str1[i] >= 97 && str1[i] <= 122)
        {
            str1[i] = str1[i] - 32;
        }

        if (str2[i] >= 97 && str2[i] <= 122)
        {
            str2[i] = str2[i] - 32;
        }
    }
    if (strcmp(str1,str2) == 0)
    {
        printf("0\n");
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (str1[i] < str2[i])
            {
            
            printf("-1\n");
            break;
        }
        if(str1[i] > str2[i])
        {
            printf("1\n");
            break;
        }
    }
}
}