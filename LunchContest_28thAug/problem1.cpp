#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        pair<int,int> p1;
        pair<int,int> p2;
        pair<int,int> p3;

        int a, b, c , d , e, f;
        cin>>a>>b>>c>>d>>e>>f;
        p1 = {a,b};
        p2 = {c,d};
        p3 = {e,f};

        if ((p1.first== p2.first || p1.first==p2.second) and (p1.second==p2.first || p1.second==p2.second))
        {
            cout<<1<<endl;
        }
        else if ((p1.first== p3.first || p1.first==p3.second) and (p1.second==p3.first || p1.second==p3.second))
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
    }
}