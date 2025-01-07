#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    float arr[n];
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        sum = sum + arr[i];
    }
    float a = sum /( n * 100);
    float result = a * 100;
    printf("%f\n", result);
}