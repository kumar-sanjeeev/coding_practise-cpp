#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int ans1 = c/a;
        int ans2 = d/b;
        cout<<ans1+ans2<<endl;
    }
}