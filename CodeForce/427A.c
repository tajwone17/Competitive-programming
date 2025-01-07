#include <stdio.h>
int main()
{
    int n;
    int arr[n];
    scanf("%d", &n);
    int hire=0;
    int crime=0;
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]==-1)
        crime++;
        else
        hire=hire+arr[i];

    }
    printf("%d\n",crime-hire);

}