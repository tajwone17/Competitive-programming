#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int flag = 0;
    cin >> n >> m;
 char string[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> string[i][j];
            
        }}
      
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        { if (string[i][j] == 'C' || string[i][j] == 'M' || string[i][j] == 'Y')
            {
                flag = 1;
                break;
            }
            
        }}
        
        if (flag == 0)
            cout << "#Black&White"<<endl;
        else
            cout << "#Color"<<endl;
    }
    
   