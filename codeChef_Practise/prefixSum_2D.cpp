#include <bits/stdc++.h>
using namespace std;

const int N=1e3+10;
int a[N][N];
int pf[N][N];
int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
            pf[i][j]=pf[i][j-1] + pf[i-1][j] - pf[i-1][j-1] + a[i][j];
        }
    }

    cout<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<pf[i][j]<<" ";
        }
        cout<<endl;
    }
}