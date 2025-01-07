#include<stdio.h>
int main(){
    int k,n,w;
    scanf("%d%d%d",&k,&n,&w);
    int sum=w*(k+w*k)/2;
    if(sum>n)
    printf("%d\n",sum-n);
    else
    printf("0\n");
}