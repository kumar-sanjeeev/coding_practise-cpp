#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int> a;
        vector<int> b;
        unordered_set<int> s;

        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            a.push_back(x);
            s.insert(x);
        }

        for(int i=0; i<n-1; i++)
        {
            int x; cin>>x;
            b.push_back(x);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int ans = b[0]-a[1];

        for(auto i:b)
        {
            if (s.count(i-ans)==0)
            {
                ans = b[0]-a[0];
                break;
            }
        }

        if (ans<=0)
        {
            ans = b[0]-a[0];
        }

        cout<<ans<<endl;
        // int a_min = a[0];
        // int a_max = a[a.size()-1];

        // int b_min = b[0];
        // int b_max = b[b.size()-1];

        // int min_diff = abs(b_min - a_min);
        // int max_diff = abs(b_max - a_max);

        // cout<<min(min_diff, max_diff)<<endl;

    }
}