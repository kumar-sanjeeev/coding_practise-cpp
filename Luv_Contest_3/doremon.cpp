#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        multiset<int> s;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        int m;
        cin>>m;

        for(int i=0; i<m; i++)
        {
            int y;
            cin>>y;
            int count = s.count(y);
            while(count--)
            {
                cout<<y<<" ";
            }
            s.erase(y);
        }

        for(auto it=s.begin(); it!=s.end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}