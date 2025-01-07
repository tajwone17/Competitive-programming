#include <stdio.h>
#include <string.h>
int main()
{
    char s1[101];
    char s2[101];
    char ns[101];
    scanf("%s%s", s1, s2);
    int len=strlen(s1);
    for (int i = 0; i <len; i++)
    {
        if (s1[i] == s2[i])
            ns[i] ='0' ;
        else
            ns[i] = '1';
    }
    ns[len]='\0';
    printf("%s\n", ns);
}