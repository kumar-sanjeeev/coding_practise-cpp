#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x<1600)
            cout<<3<<endl;
        else if(x<2000 and x>=1600)
            cout<<2<<endl;
        else if (x>=2000)
            cout<<1<<endl;
    }
}