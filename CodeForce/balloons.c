#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
   
    int n, count;
       scanf("%d",&n);
    count = 0;
    char s[n];
 scanf("%s",s);
     for (int i=0 ; i<n ; i++) {
            for (int j = 0 ; j<i ; j++) {
                if (s[i] == s[j]) {
                    count -= 1;
                
                    break;
                }
            }
            count += 2;
        }
    printf("%d\n",count);
}}
