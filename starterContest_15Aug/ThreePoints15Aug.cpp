#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long a1,b1,a2,b2,a3,b3;
        cin>>a1>>b1>>a2>>b2>>a3>>b3;


        if (a1==a2 or b1==b2 )
        {
            if(abs(b2)==abs(b3))
            {
                turn --;
                cout<<"YES"<<endl;
            }
            else if (a2==a3)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}