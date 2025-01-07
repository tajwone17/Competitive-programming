#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
        int a,b;
        scanf("%d%d",&a,&b);
        if(a==b)
        printf("Bob\n");
        else
        {
            if((a-b)%2==0)
            printf("Bob\n");
            else
            printf("Alice\n");
    }   }
