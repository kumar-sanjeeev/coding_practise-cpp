#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    int left = min(x1,x3);
    int right= max(x1,x3);
    int top = max(y1,y3);
    int bottom = min(y1,y3);

    if(x2>=left and x2<=right)
    {
        if(y2==top || y2==bottom)
        {
            cout<<"YES"<<endl;
            return;
        }
    }

    if(y2>=bottom and y2<=top)
    {
        if(x2==left || x2==right)
        {
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}