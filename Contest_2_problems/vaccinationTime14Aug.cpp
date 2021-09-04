#include <bits/stdc++.h>
using namespace std;

const int N=1e3+10;
const int M=1e3+10;

int a[M][N];
long long hsh [M][N];
long long pf [M][N];

int main()
{
    int m, n;
    cin>>m>>n;

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
            if(a[i][j] %2 ==0) hsh[i][j]=0;
            else hsh[i][j]=1;
            pf[i][j] = hsh[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int sum = 0;
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;

        cout<<pf[l2][r2]-pf[l1-1][r2]-pf[l2][r1-1]+ pf[l1-1][r1-1]<<endl;
    }
}