#include <bits/stdc++.h>
using namespace std;

const int N=1e5;
long long hsh[N];
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        hsh[a[i]]++;
    }
    set<int> S;
    for(int i=1; i<=n; i++)
    {
        S.insert(a[i]);
    }
    int count =0;

    for(auto x:S)
    {
        if(hsh[x]>) count++;
    }
    cout<<count<<endl;
}