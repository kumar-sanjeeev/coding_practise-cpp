/*
Problem URL: https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/

Methodlogy/Approach:

I have used the unordered set in this problem as the order of elements does not play
major role, unordered set will run sets function like insert, erase, find in TC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;
        unordered_set<long long> s;
        while(n--)
        {
            long long x;
            cin>>x;
            s.insert(x);
        }

        while(m--)
        {
            long long val;
            cin>>val;

            auto it = s.find(val);
            if(it!=s.end())
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            s.insert(val);
        }
    }
}