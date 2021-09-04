#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a[10];
        for(int i=0; i<10; i++)
        {
            cin>>a[i];
        }
        int team_1=0;
        int team_2=0;

        for(int i=0; i<10; i++)
        {
            if(i%2==0)
            {
                team_1 +=a[i];
            }
            else
            {
                team_2 +=a[i];
            }
        }

        if(team_1>team_2)
        {
            cout<<1<<endl;
        }
        else if(team_2>team_1)
        {
            cout<<2<<endl;
        }
        else if(team_1==team_2)
        {
            cout<<0<<endl;
        }

    }
}