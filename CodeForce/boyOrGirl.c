#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];

    fgets(str, 101, stdin);
    int length = strlen(str) - 1;
    int dc = 0;
    for (int j = 0; j < length; j++)
    {
        int found = 0;
        for (int i = 0; i < j; i++)
        {
            if (str[j] == str[i])
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            dc++;
        }
    }

  

    printf(dc % 2 != 0 ? "IGNORE HIM!\n" : "CHAT WITH HER!\n");

    return 0;
}
