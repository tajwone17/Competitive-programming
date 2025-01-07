#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
      scanf("%d",&n);
      int arr[n];
      int sumEven=0;
      int sumOdd=0;
      for(int i=0;i<n;i++)
      { scanf("%d", &arr[i]);
        if(arr[i] %2==0)
        sumEven+=arr[i];
        else
        sumOdd+=arr[i];
      }
      if((sumEven %2==0 && sumOdd %2==0) || (sumEven %2==1 && sumOdd %2==1))
      printf("YES\n");
      else
      printf("NO\n");
    }
}