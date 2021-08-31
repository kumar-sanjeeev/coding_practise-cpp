#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;

    while(t--)
    {
        int a,b,c; cin>>a>>b>>c;
        if(min(min(a,b),c)==c)
            cout<<"Alice"<<endl;
        else if (min(min(a,b),c)==b)
            cout<<"Bob"<<endl;
        else if (min(min(a,b),c)==a)
            cout<<"Draw"<<endl;
    }
}