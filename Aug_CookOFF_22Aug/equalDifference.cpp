#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0)

int main()
{
    fastio;

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        map<int,int> m;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }

        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }

        int ans = n-2;             // bcz agar if all elements are distinct
        for(auto &freq:m)
        {
            ans = min(ans, n-freq.second);
        }
        cout<<ans<<endl;

    }
}