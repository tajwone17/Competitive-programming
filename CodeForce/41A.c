#include<stdio.h>
int main(){
    char s[101];
    char t[101];
    scanf("%s%s",s,t);
    int len=strlen(s);
    int count=1;
    for(int i=0;i<len;i++){
     if(s[i]!=t[len-i-1]){
     count=0;
     break;}
     else
     count=1;
    }

    
    if(count==1)
    printf("YES\n");
    else
    printf("NO\n");
}