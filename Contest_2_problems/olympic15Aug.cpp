#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[6];
        long long team_1 =0, team_2 =0;

        for(int i=0; i<6; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<3; i++)
        {
            team_1 += a[i];
            team_2 += a[5-i];
        }
        
        if(team_1>team_2)
            cout<<1<<endl;
        else
            cout<<2<<endl;

    }
}